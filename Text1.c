#include<reg51.h>
unsigned char code Tab[]={0xfe,0xfd,0xfb,0xf7,0xef,0xdf,0xbf,0x7f};
void Send(unsigned char dat)
{
SBUF=dat;
while(TI==0)
;
TI=0;
}
void delay(void)
{
unsigned char m,n;
for(m=0;m<200;m++)
for(n=0;n<250;n++)
;
}
void main(void)
{
unsigned char i;
TMOD=0x20;
SCON=0x40;
PCON=0x00;
TH1=0xfd;
TL1=0xfd;
TR1=1;
while(1)
{
for(i=0;i<8;i++)
{
Send(Tab[i]);
delay();
}
}
}