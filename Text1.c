#include<reg51.h>
sbit sound=P3^7;
unsigned int time=0;
void main(void)
{
 TOMD=0x10;
TH1=(65536-921)/256;
TL1=(65536-921)%256;
TR1=1;
int
while(1)
{
while(TF1==0)
    ;
 TF1=0;
time++;
if(time<1000)
sound=~sound;
if(time==1000)
sound=0;
if((time>=2500)&&(time<3000))
sound=~sound;
if(time==3000)
sound=0;
if((time>=3500)&&(time<4000))
sound=~sound;
if(time==4000)
sound=0;  ;
if((time>=4500)&&(time<5500))
 sound=~sound;
if(time==5500)
sound=0;
if(time==10500)
time=0;
TH1=(65536-921)/256;
TL1=(65536-921)%256;
}
}





