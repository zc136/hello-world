#include<stdio.h>

void Add(int* p)
{
	(*p)++;
}
int main()
{
 int num=1;
	Add (& num);
	printf("num=%d\n",num);
	Add(&num);
	printf("num=%d\n",num);
	Add(&num);
	printf("num=%d\n",num);
	return 0;
}
