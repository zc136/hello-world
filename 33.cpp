#include<stdio.h>
int Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
 } 
int main()
{
	int a=10;
	int b=20;
	int arr[10]={0};
	//&arr;
	//arr;
	//Add(a,b);
	//printf("%d\n",Add(a,b));
	//&函数名和函数名都是函数的地址
	printf("%p\n",&Add);
	printf("%p\n",Add); 
	return 0;
 } 
