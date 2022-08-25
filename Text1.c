#include <reg52.h> //52系列头文件
#include <stdio.h>
#define uchar unsigned char //宏定义uchar
#define uint unsigned int //宏定义uint
uchar flag,wei;
sbit D=P2^0;
sbit C=P2^1;
sbit b=P2^2;
sbit A=P2^3;
sbit led1=P1^1;
sbit led2=P1^2;
sbit led3=P1^3;
sbit jdq=P1^4;
sbit beep=P3^4;
uchar code table[]=
{
0xc0,0xf9,0xa4,0xb0,0x99,
0x92,0x82,0xf8,0x80,0x90,
}; //共阳数码管段码表 没有小数点 0~9
void delay(uchar z) //延时函数
{
uchar a,b;
for(a=z;a>0;a--)
for(b=110;b>0;b--);
}
void didi()
{
beep=0;
delay(100);
beep=1;
delay(100);
}
void shuiwei()
{
if(A==1&&b==1&&C==1&&D==1)
{
wei=4;
}
if(A==0&&b==1&&C==1&&D==1)
{
wei=3;
}
if(A==0&&b==0&&C==1&&D==1)
{
wei=2;
}
if(A==0&&b==0&&C==0&&D==1)
{
wei=1;
}
if(A==0&&b==0&&C==0&&D==0)
{
wei=0;
}
}
void kongzhi()
{
if(wei<=1)
{
jdq=0;
led1=0;
led2=1;
led3=1;
flag=0;
didi();
}
if((flag==0)&&(wei>1)&&(wei<4))
{
jdq=0;
led1=1;
led2=0;
led3=1;
beep=1;
}
if((flag==1)&&(wei>1)&&(wei<4))
{
jdq=1;
led1=1;
led2=0;
led3=1;
beep=1;
}
if(wei>=4)
{
jdq=1;
flag=1;
led1=1;
led2=1;
led3=0;
didi();
}
}
void main() //主函数
{
while(1)
{
shuiwei();
kongzhi();
P0=table[wei];
}
}