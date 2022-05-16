#include<reg51.h>
void delay(void)
{
unsigned int i;
for(i=0;i<20000;i++);
}
void main(void)
{
  while(1)
{
  P1=0xf0;
     delay();
  P1=0xff;
     delay();
}
}

