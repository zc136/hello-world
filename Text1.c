#include<reg51.h>
unsigned char ID;
sbit S1=P1^4;
void delay(void)
{
unsigned char i,j;
for(i=0;i<200;i++)
for(j=0;j<100;j++)
;
}
void main(void)
{
TMOD=0x20;
EA=1;
ET1=1;
TR1=1;
TH1=256-200;
TL1=256-200;
ID=0;
while(1)
{
switch(ID)
{
case 0:
P3=0xfe;
break;
case 1:
P3=0xfd;
break;
case 2:
P3=0xfb;
break;
case 3:
P3=0xf7;
break;
}
}
}
void intersev(void) interrupt 3 using 1
{
TR1=0;
P1=0xff;
if(S1==0)
{
delay();
if(S1==0)
ID=ID+1;
}
if(ID==4)
ID=0;
TR1=1;
}

