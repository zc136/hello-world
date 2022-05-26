#include<reg51.h>
sbit P14=P1^4;
sbit P15=P1^5;
sbit P16=P1^6;
sbit P17=P1^7;
sbit sound=P3^7;
unsigned char keyval;
void delay(void)
{
    unsigned char i;
        for(i=0;i<200;i++)
          ;
}
void delay20ms(void)
{
    unsigned char i,j;
       for(i=0;i<100;i++)
       for(j=0;j<60;j++)
          ;
}
void main(void)
{
    unsigned char D[]={3,4,0,1,3,2,9};
    EA=1;
        ET0=1;
        TMOD=0x01;
        TH0=(65536-500)/256;
        TL0=(65536-500)%256;
        TR0=1;
        keyval=0xff;
        while(keyval!=D[0])
          ;
        while(keyval!=D[1])
          ;
        while(keyval!=D[2])
          ;
        while(keyval!=D[3])
          ;
        while(keyval!=D[4])
          ;
        while(keyval!=D[5])
          ;
        while(keyval!=D[6])
          ;
        P3=0xfe;
}
void time0_interserve(void)interrupt 1 using 1
{
    unsigned char i;
    TR0=0;
    P1=0xf0;
        if((P1&0xf0)!=0xf0)
            delay20ms();
        if((P1&0xf0)!=0xf0)
        {
        P1=0xfe;
          if(P14==0)
            keyval=1;
          if(P15==0)
            keyval=2;
          if(P16==0)
            keyval=3;
          if(P17==0)
            keyval=4;
        P1=0xfd;
          if(P14==0)
            keyval=5;
          if(P15==0)
            keyval=6;
          if(P16==0)
            keyval=0;
          if(P17==0)
            keyval=8;
        P1=0xfb;
          if(P14==0)
            keyval=9;
          if(P15==0)
            keyval=10;
          if(P16==0)
            keyval=11;
          if(P17==0)
            keyval=12;
        P1=0xf7;
          if(P14==0)
            keyval=13;
          if(P15==0)
            keyval=14;
          if(P16==0)
            keyval=15;
          if(P17==0)
            keyval=16;
for(i=0;i<200;i++)
  {
    sound=0;
    delay();
          sound=1;
          delay();
}
}
TR0=1;
TH0=(65536-500)/256;
TL0=(65536-500)%256;
}