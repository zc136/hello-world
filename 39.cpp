#include<stdio.h>
/*int main()
{
int i=0;
int arr[10]={0};
for(i=0;i<10;i++)
{
	//i=arr[i];��ѭ��000 
	//arr[i]=i;0��9 
	//printf("%d\n",arr[i]);��ӡ����9��0 
}
	return 0;
}*/
int Add (int x,int y)
{
	return (x+y);//���żӲ��Ӷ����� 
}
int main()
{
	int a=100;
	int b=11;
	int c=Add(a,b);
	printf("%d",c);
	return 0;
}
