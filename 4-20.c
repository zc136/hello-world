////BC47判断是不是字母
//#include<stdio.h>
//int main()
//{
//	char a;
//	while (scanf("%c ", &a) != EOF)
//	{
//		if (a == '\n')
//		{
//			continue;
//		}
//		if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
//		{
//			printf("%c is an alphabet",a);
//		}
//		else
//		{
//			printf("%c is not an alphabet", a);
//		}
//	}
////	return 0;
////}
////BC48字母大小写转换
//#include<stdio.h>
//int main()
//{
//	char a;
//	while (scanf("%c", &a) != EOF)
//	{
//		if (a == '\n')
//		{
//			continue;
//		}
//		if (a >= 'A' && a <= 'Z')
//		{
//			printf("%c ", a + 32);
//		}
//		else
//		{
//			printf("%c ", a - 32);
//		}
//	}
////	return 0;
////}
////bc49判断两个数的大小
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		if (a < b)
//		{
//			printf("%d", b);
//		}
//		else if (a== b)
//		{
//			printf("%d", a);
//		}
//		else
//		{
//			printf("%d", a);
//		}
//	}
//	return 0;
//}
////bc51 三角形判断
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//if (a + b > c && a + c > b && b + c > a)
//	{
//		if (a==b && b==c)
//		{
//			printf("equilateral");
//		}
//		else if ((a == b && b != c)|| (b == c && b != a)|| (a == c && a != b))
//		{
//			printf("isosceles");
//		}
//		else
//			printf("ordinay");
//	}
////	return 0;
//////}
//////bc52衡量胖瘦程度
////#include<stdio.h>
////int main()
////{
////
////	return 0;
////}
////BC53计算一元二次方程
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float a=0;
//	float b = 0;
//	float c = 0;
//	float ret = (b * b) - (4 * a * c);
//	while (scanf("%f %f %f", &a, &b, &c) != EOF)
//	{
//		if (a == 0)
//		{
//			printf("not quadratic equation");
//		}
//		if (a != 0)
//		{
//float   ret = (b*b) - (4 * a * c);
//			if (ret == 0)
//			{
//				printf("x1=x2=%.2f\n", -(b / (2 * a)));
//			}
//			else if (ret > 0)
//			{
//				printf("x1=%.2f,x2=%2.f\n", (-b - sqrt(ret) / (2.0 * a)), (-b + sqrt(ret) / (2.0 * a)));
//			}
//			else
//			{
//				printf("x1=%.2f-%.2fi,x2=%2.f+%2.fi",  -b / (2 * a) - sqrt(-ret) / (2 * a),  -b / (2 * a) + sqrt(-ret) / (2 * a));
//			}
//		}
//	}
//
//	return 0;
////}
////bc54获得月份
//#include<stdio.h>
//int main()
//{
//	//每年的4 6 9 11 的是30天
//	// 1 3 5 7 8 10 12是31天
//	// 然后计算2月的天气  闰年有29天，非闰年有28天
//	// 进行闰年的判断
//	// 1.四百一闰年&&百年不是闰年||四百年是闰年
//	// 判断语句
//	// (year%400==0&&year%100!=0)||yaer%400==0
//	//
////	//
////	//
////	return 0;
////}
////BC55简单计算器
//#include<stdio.h>
//void menu()//菜单
//{
//
//	printf("********************************************\n");
//	printf("***************1.add     2.sub**************\n");
//	printf("***************3.mul     4.div**************\n");
//	printf("***************          0.exit**** ********\n");
//	printf("********************************************\n");
//	printf("********************************************\n");
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int i = 0;
//	int x = 0;
//	int y = 0;
//	int (*pa[])(int x, int y) = { 0,Add ,sub,mul,div };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &i);
//		if (i >= 1 && i <= 4)
//		{
//			printf("输入两个数:>");
//			scanf("%d %d", &x, &y);
//			int ret = pa[i](x, y);
//			printf("%d\n", ret);
//		}
//		else if (i == 0)
//		{
//			printf("退出");
//		}
//		else
//		{
////			printf("选择错误\n");
////		}
////	} while (i);
////}
////BC56线段图案
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	while (scanf("%d ", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			printf("* ");
//		}
////	}
////	return 0;
////}
////BC57正方形图案
//#include<stdio.h>
//int main()
//{
//	int j = 0;
//	int i = 0;
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
////	}
////	return 0;
////}
////BC58打印直角三角形
//#include<stdio.h>
//int main()
//{
//	int j = 0;
//	int i = 0;
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)//行数要大于等于列数
//		{
//			for (j = 0; j <= i; j++)//控制列数
//			
//				printf("* ");
//				printf("\n");
//			
//		}
//	}
//	return 0;
//}
//BC59翻转直角三角形的图案