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
	//&�������ͺ��������Ǻ����ĵ�ַ
	printf("%p\n",&Add);
	printf("%p\n",Add); 
	return 0;
 } 
