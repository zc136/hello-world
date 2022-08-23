//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////void menu()
// 猜数字游戏
//{
//	printf("************************\n");
//	printf("**********1.piay********\n");
//	printf("**********2.exit********\n");
//}
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入数字>:");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(null));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			break;
//		default:
//			printf("请选择,重新输入!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}*/
// 100-200之间能被自身自身整除
//int  is_prime(int n)
//{
//	int a = 0;
//	for (a = 2; a <= sqrt(n); a++)
//	{
//		if (n % a == 0)
//			return 0;
//		else
//			return 1;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("i=%d\n", i);
//
//	}
//	return 0;

//#include<stdio.h>
//#include<math.h>
//int  is_prime(int n)
//{
//	int a = 0;
//	for (a = 2; a <= sqrt(n); a++)
//	{
//		if (n % a == 0)
//			return 0;
//		else
//			return 1;
//	}
//	
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("i=%d\n", i);
//	}
//	return 0;
//}
//#include <stdio.h>

////描述第n个斐波那数的时间
//int Fib(int n);
//int main()
//{
//	int n = 1;
//	//int ret = 1;
//	scanf("%d\n ", &n);
//	int ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//int Fib(int n)
//{
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
////计算1！+2！+3！+4！+...+n!
//#include<stdio.h>
//int main()
//{
//
//	int sum = 0;
//	int n = 0;
//	int j = 0;
//	int ret = 1;
//	scanf("%d", &n);
//
//	for (j = 1; j <= n; j++)
//	{
//		ret *= j;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//n的阶乘
//#include <stdio.h>
//#include<math.h>
//
//int Facl(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Facl(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
// 
//int main()
//{
//	int n = 1;
//	int ret = 1;
//	scanf("%d\n", &n);
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//int Fib(int n)
//{
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
////二维数组
//#include<stdio.h>
//int main()
//{
//
//	int arr[3][4] = { {1,2,3,6},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 冒泡排序
//#include <stdio.h>
//#include<string.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//排序的总论述数=元素的个数-1
// 
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//每轮对比的次数=元素个数-排序论数-1
//		{
//			int tmp = arr [j];
//			arr[j] = arr[j + 1];
//			arr [j + 1] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(p));//指针就是地址
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//short就是2个字节
//	printf("%d\n", s);
//	return 0;
//}
//#include<stdio.h>
//void test1(int arr[])//形参
//{
//	printf("%d\n", sizeof(arr));//4
//
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4
//}
//int main()
//{
//	int arr[10] = { 0 };//实参
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);
//	test2(ch);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}
int main()
{
	int a = 0x11223344;//内存问题
	int* p = &a;
	*p = 0;
	/*char* p = &a;
	*p = 0;*/

	return 0;
}
////1！+2！+.....+n!
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	/*int i = 0;*/
//	int sum = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//
//	int j = 0;
//
//	for (j = 1; j <= n; j++)
//	{
//		ret *= j;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}
//指针问题空间
//int main()
//{
//	 int num = 10;
//	int n = 100;
//	int* p = &num;
//	*p = 20;
//	p = &n;
//	printf("%d\n", num);
//	printf("%d\n", n);
//	printf("%d\n", p);
//	return 0;
//}
//写一段代码告诉我们当前机器的字节序是什么
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}
#include<stdio.h>
//int check_s()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if(*p==1)
//	return 1;
//	else
//	return 0;
//}
////判断大小端
//int check_s();
//int main()
//{
//	//写一段代码告诉我们机器的字节是什么 （优化）
//	//返回1是小端，返回0是大端
//	int ret = check_s();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//
//	}
//	return 0;
//}
//int check_s()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}
//指针空间
//#include<stdio.h>
//int main()
//{
//	char a = -1;
//	//原码10000000  00000000  00000000  00000001 
//	//反码11111111  11111111  11111111  11111110
//	//补码11111111  11111111  11111111  11111111
//	// 11111111
//	signed char b = -1;
//	// 11111111
//	unsigned char c = -1;
//	//    00000000  00000000  00000000 11111111
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	// -1  -1  255
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char a = -128;
//	//10000000  00000000  00000000  10000000
//	//11111111  11111111  11111111  01111111
//	//11111111  11111111  11111111  10000000
//	// 10000000
//	//11111111  11111111  11111111  10000000
//	//
//	printf("%u\n", a);
////	return 0;
//////}
////#include<stdio.h>
////int main()
////{
////	int n = 9;
////	float* p = (float*)&n;
////	printf("n的值为:%d\n", n);
////	printf("*p的值为:%f\n", *p);
////	*p = 9.0;
////	printf("num的值:%d\n", n);
////	printf("*p的值:%f\n", *p);
////	return 0;
////
////}
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
////指针数组是数组，用来存放指针
//#include <stdio.h>
////int main()
////{
////	int arr[10] = { 0 }; //整形数组
////	char ch[5] = { 0 };  //字符数组
////	int* p[4];  //存放整形指针的数组，指针数组
////	char* p1[5];//存放字符指针的数组，指针数组
////	return 0;
////}
//int main()
//{
//	//int* p = NULL;  //p是整形指针，指向整形中的指针  可以存放整形的地址
//	//char* pc = NULL;  //pc是字符指针，指向字符的指针，可以存放字符的地址
//	//int arr[10] = { 0 };
//	//arr  //首元素地址
//	//	& arr[0]//首元素的地址
//	//	& arr//数组的地址
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* p[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(p[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", p[i]);
//		/*	printf("%d ", arr[i]);
//			printf("%d ", *(p+i));
//			printf("%d ", *(arr + i));*/
//	}
//	return 0;
//}
////指针数组表示
//#include<stdio.h>
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////void print2(int(*p)[5], int x, int y)
////{
////	int i = 0; 
////	int j = 0;
////
////	for (i = 0; i < x; i++)
////	{
////		for (j = 0; j < y; j++)
////		{
////			printf("%d ", p[i][j]);
////		}
////		printf("\n");
////
////	}
////}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);   //arr 是数组名 数组名是首原属的地址
//	/*print2(arr, 3, 5);*/
//	return 0;
//}
//////数组传参
////#include<stdio.h>
////
////////void test (int arr[])
////////{}
////////void test(int arr[10])
////////{}
//////void test(int *arr)
//////{}
//////
//////int main()
//////{
//////	int arr[10] = { 0 };
//////	test(arr);
//////	
//////}
////void test(int arr[3][5])
////{}
////void test(int arr[][5])
////{}
////void test(int arr[3][])//  这种方式错误，二维数组中行可以省略，但是列不可以省略
////{}
////int main()
////{
////	int arr[3][5] = { 0 };
////	test(arr);
////	test1(arr);
////	test2(arr);
////	return 0;
////}
//#include  <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);//一级指针p，传给函数 
//	print(p, sz);
//	return 0;
//}
//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*p)(int, int) = Add;
//	int sum = (*p)(1, 2);
//	/*int sum = Add(1, 2);*/
//	printf("%d\n", sum);
//	return 0;
//}
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
//#include<stdio.h>
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* pr = (int*)(&a + 1);
//	printf("%d %d", *(a + 1), *(pr - 1));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a[5] = { 1,2,3,4,5 };
//    int* pa1 = (int*)(&a + 1);
//    int* pa2 = (int*)((int)a + 1);
//    printf("%x %x", pa1[-1], *pa2);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa1 = (int*)(&aa + 1);
//	int* pa2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(pa1 - 1), *(pa2 - 1));
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//逗号表达式
//	int* p;
//	p = a[0];
//	printf("%d", a[0]);
//	return 0;
//}
//.柔型数组
//struct  S
//
//{
//	int n;
//	char c;
//	int arr[0];//柔型数组
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
#include<stdio.h>
int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);
	return 0;
}