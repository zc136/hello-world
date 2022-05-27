#include<reg51.h> 
void delay60ms(void)
{
 unsigned char m,n;
 for(m=0;m<100;m++)
   for(n=0;n<200;n++)
        ;
}
void main(void)
{  
  unsigned char i;
  unsigned char code Tab[ ]={0xfe,0xfd,0xfb,0xf7,0xef,0xdf,0xbf,0x7f,0x7f,0xbf,0xdf,0xef,0xf7,0xfb,0xfd,0xfe};  
  while(1)
  {
	 for(i=0;i<16;i++)
      {
        P0=Tab[i];
        delay60ms();
         P1=Tab[i];
       delay60ms();
	   }
	} 
}