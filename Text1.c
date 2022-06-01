#include<reg51.h>
sbit S1=P1^0;
sbit S2=P1^1;
sbit S3=P1^2;
unsigned char keyval;
unsigned char ID;
void delay(void)
{
  unsigned char i,j;
  for(i=0;i<150;i++)
    for(j=0;j<150;j++)
          ;
}
void motor_delay(void)
{
  unsigned int i;
    for(i=0;i<2000;i++)
            ;
}
void forward()
{
  P0=0xfc;
  motor_delay();
  P0=0xf6;
  motor_delay();
  P0=0xf3;
  motor_delay();
  P0=0xf9;
  motor_delay();
}
void backward()
{
  P0=0xfc;
  motor_delay();
  P0=0xf9;
  motor_delay();
  P0=0xf3;
  motor_delay();
  P0=0xf6;
  motor_delay();
}
void stop(void)
{
   P0=0xff;
}
void main(void)
{
  TMOD=0x10;
  EA=1;
  ET1=1;
  TR1=1;
  TH1=(65536-200)/256;
  TL1=(65536-200)%256;
  keyval=0;
  ID=0;
  while(1)
       {
         switch(keyval)
            {
              case 1:forward();
                      break;
              case 2:backward();
                      break;
              case 3:stop();
                      break;
             }
         }
}
void Time0_serve(void)interrupt 3 using 1
{
   TR1=0;
   if((P1&0x0f)!=0x0f)
{
delay();
if((P1&0x0f)!=0x0f)
{
if(S1==0)
keyval=1;
if(S2==0)
keyval=2;
if(S3==0)
keyval=3;
                     }
          }
  TH1=(65536-200)/256;
  TL1=(65536-200)%256;
  TR1=1;
}