#include<reg51.h>
sbit D1=P2^0;
sbit D2=P2^1;
sbit D3=P2^2;
sbit D4=P2^3;
sbit D5=P2^4;
sbit D6=P2^5;
sbit D7=P2^6;
sbit D8=P2^7;
unsigned char Countor1;
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
void Time0(void)interrupt 1 using 0
{
Countor1++;
Countor2++;
Countor3++;
Countor4++;
if(Countor1==20)
{
D1=~D1;
D5=~D5;
Countor1=0;
}
if(Countor2==40)
{
D2=~D2;
D6=~D6;
Countor2=0;
}
if(Countor3==60)
{
D3=~D3;
D7=~D7;
Countor3=0;
}
if(Countor4==80)
{
D4=~D4;
D8=~D8;
Countor4=0;
}
TH0=(65536-46083)/256;
TL0=(65536-46083)%256;
}


