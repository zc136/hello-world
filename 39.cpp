#include<stdio.h>
/*int main()
{
int i=0;
int arr[10]={0};
for(i=0;i<10;i++)
{
	//i=arr[i];死循环000 
	//arr[i]=i;0到9 
	//printf("%d\n",arr[i]);打印出来9个0 
}
	return 0;
}*/
int Add (int x,int y)
{
	return (x+y);//括号加不加都可以 
}
int main()
{
	int a=100;
	int b=11;
	int c=Add(a,b);
	printf("%d",c);
	return 0;
}
