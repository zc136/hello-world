/*#include<reg51.h>
sfr x=0xb0;
void delay(void)
{
  unsigned char i,j;
for(i=0;i<250;i++)
for(j=0;j<250;j++)
;
}
void main(void)
{
while(1)
{
x=0xfe;
delay();
x=0xfd;
delay();
x=0xfb;
delay();
x=0xf7;
delay();
x=0xef;
delay();
x=0xdf;
delay();
x=0xbf;
delay();
x=0x7f;
delay();
}
}*/
#include<reg51.h>
sbit S1=P1^4;
sbit S2=P1^5;
void main(void)
{
while(1)
{
if(S1==0)
P0=0x0f;
if(S2==0)
P0=0xf0;
}
}
