#include<reg51.h>
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
P2=0xfe;
P0=0xc0;
delay();
P2=0xfd;
P0=0x92;
delay();
P2=0xfb;
P0=0xb0;
delay();
P2=0xf7;
P0=0x99;
delay();
P2=0xef;
P0=0xc0;
delay();
P2=0xdf;
P0=0xf9;
delay();
P2=0xbf;
P0=0xb0;
delay();
P2=0x7f;
P0=0xa4;
delay();

}
}
