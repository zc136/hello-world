#include<reg51.h>


#include<intrins.h> 


#define uchar unsigned char


#define uint unsigned int                 


sbit led=P1^0;


sbit beep=P1^1;


sbit dj=P3^0;


sbit DQ=P3^1;





sbit key1=P3^2;


sbit key2=P3^3;


sbit key3=P3^4;


sbit w1=P2^0;


sbit w2=P2^1;


sbit w3=P2^2;


sbit w4=P2^3;                         





uchar table[22]=


{0x3F,0x06,0x5B,0x4F,0x66,


0x6D,0x7D,0x07,0x7F,0x6F,


0x77,0x7C,0x39,0x5E,0x79,0x71,


0x40,0x38,0x76,0x00,0xff,0x37};


uint wen_du;  


uint hight,low;


uchar dangwei;


uchar flag;


uchar d1,d2,d3;


void delay(uint ms)               


{


        uchar x;


        for(ms;ms>0;ms--){


		  for(x=10;x>0;x--);


		  }          


}





void delay_18B20(uint i)


{


        while(i--);


}





void Init_DS18B20() 


{


         uchar x=0;


         DQ=1;          


         delay_18B20(8);  


         DQ=0;          


         delay_18B20(80); 


         DQ=1;          


         delay_18B20(14);


         x=DQ;            


         delay_18B20(20);


}





uchar Read()


{


        uchar i=0;


        uchar dat=0;


        for (i=8;i>0;i--)


         {


                  DQ=0; 


                  dat>>=1;


                  DQ=1; 


                  if(DQ)


                  dat|=0x80;


                  delay_18B20(4);


         }


         return(dat);


}





void Write(uchar dat)


{


         uchar i=0;


         for (i=8;i>0;i--)


         {


                 DQ=0;


                 DQ=dat&0x01;


            delay_18B20(5);


                 DQ=1;


            dat>>=1;


        }


}





void ReadTemperature()


{


        uchar a=0;


        uchar b=0;


        uchar t=0;


        Init_DS18B20();


        Write(0xCC);            


        Write(0x44);         


        delay_18B20(100);       


        Init_DS18B20();


        Write(0xCC);         


        Write(0xBE);         


        delay_18B20(100);


        a=Read();            


        b=Read();                   


        wen_du=((b*256+a)>>4);    


       


}


void display()


{


        w1=0;P0=table[d1];delay(10); 


        P0=0x00;w1=1;delay(1);


         


        w2=0;P0=table[16];delay(10);


        P0=0x00;w2=1;delay(1);





        w3=0;P0=table[d2]; delay(10);


        P0=0x00;w3=1;delay(1);





        w4=0;P0=table[d3];delay(10);


        P0=0x00;w4=1;delay(1);


}


void zi_keyscan()


{


        if(key1==0)                                                         


        {


                delay(30);                                                  


                if(key1==0)flag=1;                                  


                while(key1==0);               


        }


        while(flag==1)                                                


        {


                d1=18;d2=hight/10;d3=hight%10;         


                display();                              


                if(key1==0)                                                  


                {


                        delay(30);                                         


                        if(key1==0)flag=2;                          


                        while(key1==0);


                }


                if(key2==0)                                                 


                {


                        delay(30);                                          


                        if(key2==0)                                          


                        {


                                hight+=5;                                  


                                if(hight>=100)hight=100; 


                        }while(key2==0);


                }


                if(key3==0)                                                  


                {


                        delay(30);                                     


                        if(key3==0)                                    


                        {


                                hight-=5;                              


                                if(hight<=10)hight=10;       


                        }while(key3==0);


                }                


        }


        while(flag==2)                                                


        {


                d1=17;d2=low/10;d3=low%10;           


                display();                                        


                if(key1==0)


                {


                        delay(30);


                        if(key1==0)flag=0;


                        while(key1==0);


                }


                if(key2==0)


                {


                        delay(30);


                        if(key2==0)


                        {


                                low+=5;


                                if(low>=95)low=95;        


                        }while(key2==0);


                }


                if(key3==0)


                {


                        delay(30);


                        if(key3==0)


                        {


                                low-=5;


                                if(low<=0)low=0;        


                        }while(key3==0);


                }                


        }


}


void zi_dong()


{


        uchar i;


        d1=dangwei;d2=wen_du/10;d3=wen_du%10;               


        zi_keyscan();


        display();         


        if(wen_du<low){dj=0;dangwei=0;}


        if((wen_du>=low)&&(wen_du<=hight))


        {


                dangwei=1;                                                                                    


                for(i=0;i<3;i++){dj=0;display();zi_keyscan();}        


                for(i=0;i<6;i++){dj=1;display();zi_keyscan();}                


        }


        if(wen_du>hight){ dj=1;dangwei=2; }


	  }


void main()                  


{


	          


        uchar j;


        dj=0;                  


        hight=30;


        low=20;              


	     


        for(j=0;j<80;j++) 	


          ReadTemperature();


        while(1)                         


        {       


                ReadTemperature();        


                zi_dong();


			      if(wen_du>=45){


					   led=~led;


						beep=~beep;


					}	


					else{


						led=0;


						beep=0;


					}


						


					   


        }


}