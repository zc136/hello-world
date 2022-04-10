#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main()
{
	int*p=(int*)malloc(10*sizeof(int));
	if(p==NULL)
	{
		printf("%s",strerror(errno));
	}
	else
	{
		int i=0;
		for(i=0;i<10;i++)
		{
			*(p+i)=i;
			printf("%d",*(p+i));
		}
	}
	return 0;
}

