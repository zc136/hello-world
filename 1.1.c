#include<reg51.h>
sbit D1=P^0;
sbit D2=P^1;
sbit D3=P^2;
sbit D4=P^3;
unsigned char Countorl;
unsigned char Countor2;
unsigned char Countor3;
unsigned char Countor4;
void main(void)
{
    EA=1;
    ET0=1;
    TMOD=0x01;
    TH0=(65536-46083)/256;
    TL0=(65536-46083)%256;
    TR0=1;
    Countor1=0;
    Countor2=0;
Countor3=0;
    Countor4=0;

  while(1)
    ;
}
void Time1(void)interrupt 3 using 0
{
    Countor1++;
    Countor2++;
Countor++;
    Countor3++;
  if (Countor1==20)
{
    D1=~D1;
    Countor1=0;
}
  if (Countor2==40)
{
    D2=~D2;
    Countor2=0;
}
if (Countor3==60)
{
    D3=~D3;
    Countor3=0;
}
if (Countor4==80)
{
    D4=~D4;
    Countor4=0;
}
TH0=(65536-46083)/256;
TL0=(65536-46083)%256;
}
