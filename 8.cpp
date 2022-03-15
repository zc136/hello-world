#include <stdio.h>
int main()
{
int i=0;
while(i<10)
{
	if(i==5)
		continue;
	printf("i=%d\n",i);
	i++;
}
	
	return 0;
}

