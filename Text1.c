#include<reg51.h>
sbit S1=P1^4;
sbit S2=P1^5;
sbit S3=P1^6;
sbit S4=P1^7;
unsigned char keyval;
void led_delay(void)
{
unsigned char i,j;
for(i=0;i<250;i++)
for(j=0;j<250;j++)
;
}
void delay20ms(void)
{
unsigned char i,j;
for(i=0;i<100;i++)
for(j=0;j<60;j++)
;
}
void forward(void)
{
P3=0xfe;
led_delay();
P3=0xfd;
led_delay();
P3=0xfb;
led_delay();
P3=0xf7;
led_delay();
P3=0xef;
led_delay();
P3=0xdf;
led_delay();
P3=0xdf;
led_delay();
P3=0x7f;
led_delay();
P3=0xfe;
led_delay();
}
void backward(void)
{
P3=0x7f;
led_delay();
P3=0xbf;
led_delay();
P3=0xdf;
led_delay();
P3=0xef;
led_delay();
P3=0xf7;
led_delay();
P3=0xfb;
led_delay();
P3=0xfd;
led_delay();
P3=0xfe;
led_delay();
}
void stop(void)
{
P3=0xff;
}
void flash(void)
{
P3=0xff;
led_delay();
P3=0x00;
led_delay();
}
void key_scan(void)
{
if((P1&0xf0)!=0xf0)
{
delay20ms();
if(S1==0)
keyval=1;
if(S2==0)
keyval=2;
if(S3==0)
keyval=3;
if(S4==0)
keyval=4;
}
}
void main(void)
{
keyval=0;
while(1)
{
key_scan();
switch(keyval)
{
case 1:forward();
break;
case 2:backward();
break;
case 3:stop();
break;
case 4:flash();
break;
}
}
}





