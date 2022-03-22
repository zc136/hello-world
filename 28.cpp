#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int num=0;
	int count=0;
	scanf("%d",&num);
	int i=0;
	for(i=0;i<32;i++)
	{
		if(1==((num>>i)&1))
		count++;
	}
	printf("%d\n",count);
	return 0;
}
