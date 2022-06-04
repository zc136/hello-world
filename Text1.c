#include<reg51.h>
unsigned char Receive(void)
{
unsigned char dat;
while(RI==0)
;
RI=0;
dat=SBUF;
return dat;
}
void main(void)
{
TMOD=0x20;
SCON=0x50;
PCON=0x00;
TH1=0xfd;
TL1=0xfd;
TR1=1;
REN=1;
while(1)
{
P1=Receive();
}
}
