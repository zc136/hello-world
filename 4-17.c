//BC1 实践出真知
//#include <stdio.h>
//int main()
//{
//	printf("Practice makes perfect!\n");
//	return 0;
//}
//BC2我是大V
//#include<stdio.h>
//int main()
//{
//	printf("v v\n");
//	printf("vv\n");
//	printf("v\n");
//	return 0;
//}
//BC3确定不同整型数据类型在内存中占多大的字节，输出不同整形类型在内存中占多大字节
//#include <stdio.h>
//int main()
//{
//	printf("The size of short is %d bytes\n",sizeof(short));
//	printf("The size of int is %d bytes\n",sizeof(int));
//	printf("The size of long is %d bytes\n",sizeof(long));
//	printf("The size of long is %d bytes\n",sizeof(long long));
//	return 0;
//}
//BC4小飞机
//#include <stdio.h>
//int main()
//{
//	printf("            **         \n");
//	printf("            **         \n");
//	printf("***********************\n");
//	printf("***********************\n");
//	printf("            **         \n");
//	printf("            **         \n");
//
//	return 0;
//}
//BC5缩短二进制
//#include<stdio.h>
//int main()
//{
//	int a = 1234;
//	//printf("%#o %#X\n", a, a);   0是八进制前显示
//	//在十六进制数前显示前导0X
//	printf("0%o, 0X%X", a, a);
//	return 0;
//
//}
//BC6十六制转为十进制
//#include<stdio.h>
//int main()
//{
//	int i = 0XABCDEF;
//	printf("%d\n", i);
//	return 0;
//}
//BC9printf的返回值
//#include <stdio.h>
//int main()
//{
//	//char arr[] = "hello world!";
//	//printf("%s\n", arr);
//	int a = printf("hello world");//	不能加入\n  否则出现10个字符
//	printf("\n");//
//	printf("%d\n", a);
//	return 0;
//}
//BC10成绩的输入与输出
//#include<stdio.h>
//int main()
//{
//	int score1 = 0;
//	int score2 = 0;
//	int score3 = 0;
//	scanf(" %d %d %d" ,&score1, &score2, &score3);
//	printf("score1=%d,score2=%d,score3=%d",score1,score2,score3);
//	return 0;
//}
//BC11 学生信息的输入与输出
//#include<stdio.h>
//int main()
//{
//	int NUM = 0;
//	float C = 0;
//	float M = 0;
//	float E = 0;
//	scanf("%d;%f,%f,%f", &NUM, &C, &M, &E);
//	printf("the each subject of NO.%d is %.2f,%.2f,%.2f", NUM, C, M, E);
//
//	return 0;
//
//}
//BC12 字符金字塔
//#include<stdio.h>
//int main()
//{
//	char a;
//	scanf("%s", &a);
//	int n = 0;//n表示空格后输入的字符
//	int i = 1;//i表示行数
//	int j = 0;
//	for (i =1; i < 6; i++)
//	{
//		for (j =5 - i; j > 0; j--)//j表示第i行里面有5-i个空格
//		{
//			printf(" ");
//		}
//		for (n=0; n<i; n++)
//		{
//			printf("%c ", a);
//		}
//		printf("\n");
//	}
//	return 0;
//}
////BC8 字符圣诞树
//#include<stdio.h>
//int main(void)
//{
//	char a;
//	scanf("%s", &a);
//	int n = 5;//n表示空格后输入的字符
//	int i = 0;//i表示行数
//	int j = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		for (j = i; j < n; j++)//j表示第i行里面有5-i个空格
//		{
//			printf(" ");
//		}
//		for (j = i; j > 0; j--)
//		{
//			printf("%c", a);
//			printf(" ");
//		}
//		printf("\n");
//		return 0;
//	}
//}
//BC13  ASCII码
//#include <stdio.h>
//int main()
//{
//	//int i = 0;
//	int arr[12] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*for (i = 0; i < 12; i++);
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}*/
//int i = 0;
//while (i < sz)
////{
////	printf("%c", arr[i]);
////	i++;
////}
////	return 0;
////}
////
//////#include<stdio.h>
////int main()
////{
////    int a[12] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
////    int i = 0;
////    while (i < 12)
////    {
////        printf("%c", a[i]);
////        i++;
////    }
////    return 0;
////}
//BC14出生年月日的输入与输出
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%4d%2d%2d", &a, &b, &c);//因为年是四位数字 所以加上4，其余加上2
//	printf("a=%d\nb=%d\nc=%d\n", a, b, c);
//
//	return 0;
//}
//BC15交换两个数值的大小
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	//scanf("%d %d", &a, &b);//引入第三变量交换数值
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d %d", a, b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a =10;
//	int b =20;
//	//scanf("a=%d,b=%d", &a, &b);
////	printf("a=%d,b=%d",b, a);
////	return 0;
////}
//////BC16 字符转ASCII码
////#include<stdio.h>
////int main()
////{
////	char c ;
////	scanf("%c", &c);
////	printf("%d\n", c);
////
////	return 0;
////}
//////BC17计算表达式的值
////#include <stdio.h>
//////#define NUM(X,Y)  (-8 + 22) * a - 10 + c / 2
////int main()
////{
////	
////	int a = 40;
////	int c = 212;
////	int ret = (-8 + 22) * a - 10 + c / 2;
////	//int ret = NUM(40, 212);
////	printf("%d", ret);
////	return 0;
//}
