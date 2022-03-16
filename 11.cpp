//打印1000到2000之间的闰年
//1.能被4整除且不能被100整除
//2.能被400整除的
#include<stdio.h>
int main()
{
	int count=0;
	int year=0;
  for(year=1000; year<=2000; year++)
	{
		if(year%4==0 && year%100!=0)
		{
			printf("%d\n",year);
			count++;
				}
		else if(year%100==0)
		{
			printf("%d\n",year);
			count++;
				}		
	}
	printf("%d\n",count);
	return 0;
 } 

//打印两个数的最大公约数 
//#include<stdio.h>
//int main()
//{
//int a=12;
//int b=4;
//int c=0;
//scanf("%d%d",&a,&b);
//while(a%b)
//{
//	c=a%b;
//	a=b;
//	b=c;
//}
//printf("%d\n",b);
//		return 0;
// } 


















