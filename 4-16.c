#include<stdio.h>
#include<stddef.h>
#define OFFSETOF(name,member)  (int)&(((name*)0)->member)
struct S
{
	char c1;
	int a;
	char c2;
};
int main()
{
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c2));//offsetofµÄÊµÏÖ

	return 0;
}

//#define MAX(x,y)  ((x)>(y)?(x):(y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a++, b++);
//	//int max=MAX ((a++)>(b++)?(a++):(b++));
//	printf("%d\n", max);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
////#define PRINT(x) printf("the value of "#x" is %d\n",x) 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char* p = "hello";
//	//printf("hello\n");
//	printf("%s", p);
//	return 0;
//}

//#define NUM(x) x*x
//int main()
//{
//	//int ret = NUM(5);
//	int ret = NUM(5 + 1);
//	
//	printf("%d\n", ret);
//
//	return 0;
//}