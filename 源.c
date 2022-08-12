//#include<stdio.h>
//int main()
//{
	/*int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a+0));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a+1));
	printf("%d\n", sizeof(a[1]));
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(*&a));
	printf("%d\n", sizeof(&a[0]+1));
	printf("%d\n", sizeof(&a[0]+1));*/
//	char arr[] = { 'a','b','c','d','e','f', };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr+0));
//	printf("%d\n", sizeof(*arr)); 
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr+1));
//	printf("%d\n", sizeof(&arr[0] + 1));
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
////	printf("%d\n", strlen(*arr));
//	//printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
	//char* p = "abcdef";
	//printf("%d\n", strlen(p));
	//printf("%d\n", strlen(p+1));
	////printf("%d\n", strlen(*p));
	////printf("%d\n", strlen(p[0]));
	//printf("%d\n", strlen(&p)); 
	//printf("%d\n", strlen(&p+1));
	//printf("%d\n", strlen(&p[0]+1));

	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(p + 1));
	//printf("%d\n", sizeof(*p));
	//printf("%d\n", sizeof(p[0]));
	//printf("%d\n", sizeof(&p));
	//printf("%d\n", sizeof(&p + 1));
	//printf("%d\n", sizeof(&p[0] + 1));
	//char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr+0));
	//printf("%d\n", strlen(*arr));
	//printf("%d\n", strlen(arr[1]));
	/*printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr+1));
	printf("%d\n", strlen(&arr[0]+1));

	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr+0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr+1));
	printf("%d\n", sizeof(&arr[0]+1));
	
	return 0;
}*/
#include<stdio.h>
	int main()
	{
		int a[5] = { 1,2,3,4,5 };
		int* pa1 = (int*)(&a + 1);
		int* pa2 = (int*)((int)a + 1);
		printf("%x %x", pa1[-1], *pa2);
		return 0;
	}
