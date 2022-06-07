#include<reg51.h>
sbit sound=P3^7;
unsigned int C;

#define l_dao 262
#define l_re 286
#define l_mi 311
#define l_fa 349
#define l_sao 392
#define l_la 440
#define l_xi 494

#define dao 523
#define re 587
#define mi 659
#define fa 698
#define sao 784
#define la 880
#define xi 987

#define h_dao 1046
#define h_re 1174
#define h_mi 1318
#define h_fa 1396
#define h_sao 1567
#define h_la 1760
#define h_xi 1975

void delay()
  {
  unsigned char i,j;
   for(i=0;i<250;i++)
    for(j=0;j<250;j++)
    ;
  }

void main(void)
  {
  unsigned char i,j;
  unsigned int code f[]={dao,dao,sao,sao,
                         la,la,sao,
                         fa,fa,mi,re,
                         re,re,dao,
                         sao,sao,fa,fa,
                         mi,mi,re,
                         sao,sao,fa,fa,
                         re,re,dao,
                         dao,dao,sao,sao,
                         la,la,sao,
                         fa,fa,mi,mi,
                         re,re,dao,
                         0xff};
  unsigned char code JP[]={2,2,2,2,
                           2,2,2,
                           2,2,2,2,
                           2,2,2,
                           2,2,2,2,
                           2,2,2,
                           2,2,2,2,
                           2,2,2,
                           2,2,2,2,
                           2,2,2,
                           2,2,2,2,
                           2,2,2,};
  EA=1;
  ET0=1;
  TMOD=0x00;
    while(1)
      {
      i=0;
      while(f[i]!=0xff)
        {
        C=46083/f[i];
        TH0=(8192-C)/32;
        TL0=(8192-C)%32;
        TR0=1;
          for(j=0;j<JP[i];j++)
          delay();
            TR0=0;
            i++;
        }
      }
  }
void Time0(void) interrupt 1 using 1
  {
   sound=!sound;
   TH0=(8192-C)/32;
   TL0=(8192-C)%32; 
  }