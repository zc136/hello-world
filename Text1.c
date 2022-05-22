#include<reg51.h>
unsigned char code Tab[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90}; 
unsigned char int_time;
unsigned char second;
void delay(void)
{
  unsigned char i;
  for(i=0;i<200;i++)
        ;
}
 void DisplaySecond(unsigned char k)
{
   P2=0xfe;
   P0=Tab[k/10];
   delay();
   P2=0xfd;
   P0=Tab[k%10];
   delay();
}
  void main(void)
   {
	  TMOD=0x01;
	  TH0=(65536-46083)/256;
	   TL0=(65536-46083)%256;
		EA=1;
		ET0=1;
		TR0=1;
		int_time=0;
		second=0;		
        while(1)
		{
	       DisplaySecond(second);
		 }
    }  
  void interserve(void ) interrupt 1 using 1  
  {
    TR0=0;
    int_time ++;	
	 if(int_time==5)
	  {
        int_time=0;
	    second++;
	    if(second==60)
	      second =0;
	  }		      
  	TH0=(65536-46083)/256;
	TL0=(65536-46083)%256;
	TR0=1;
}
