#include<reg51.h>
sbit P14=P1^4;
sbit P15=P1^5;
sbit P16=P1^6;
sbit P17=P1^7;
unsigned char code Tab[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
unsigned char keyval;
void led_delay(void)
{
unsigned char j;
for(j=0;j<200;j++)
;
}
void display(unsigned char k)
{
P2=0xbf;
P0=Tab[k/10];
led_delay();
P2=0x7f;
P0=0x7f;
P0=Tab[k%10];
led_delay();
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
EA=1;
ET0=1;
TMOD=0x01;
TH0=(65536-500)/256;
TL0=(65536-500)%256;
TR0=1;
keyval=0x00;
while(1)
{
display(keyval);
}
}
void time0_interserve(void) interrupt 1 using 1
{
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
keyval=7;
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
}
TR0=1;
TH0=(65536-500)/256;
TL0=(65536-500)%256;
}