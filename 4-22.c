////BC69空心正方形图案  //BC70空心三角形
//#include<stdio.h>
//int main()
//{
//	int n = 0;//先处理第一行和最后一行
//	
//	int i, j;//对于中间行的空格为2*n-3
//
//	//接着打印首尾的星号
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; ++i)
//		{
//			if (i == 0 || i == n - 1)
//			{
//				for (j = 0; j < n; ++j)
//				{
//					printf("* ");
//				}
//			}
//			else
//			{
//				printf("*");
//				for (j = 0; j < 2 * n - 3; ++j)
//
//					printf(" ");
//				printf("* ");
//				
//			}
//			
//			printf("\n");
//		}
//	}
//
//	return 0;
////}
// //BC70空心三角形图案
//#include<stdio.h>
//int main()
//{
//
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		//先打印最后一行
//		for (int i = 1; i <= n; ++i)
//		{
//			if (i == n)
//			{
//				for (int j = 0; j < n; ++j)
//					printf("* ");
//			}
//			else
//			{
//				for (int j = 1; j <= 2 * i - 1; ++j)
//					if (j == 1)
//					{
//						printf("*");
//					}
//					else if (j == 2 * i - 1)
//				{
//					printf("*");
//				}
//					else
//					{
//						printf(" ");
//					}
//				/*for (int j = 0; j < (2 * n) - (2 * i - 1); ++j)
//					printf(" ");*/
//			}
//			for (int j = 0; j < (2 * n) - (2 * i - 1);++j)
//				printf(" ");
//			printf("\n");
//		}
//	}
//	return 0;
//}
//BC71新年快乐
//#include<stdio.h>
//int main()
//{
//	printf("happy new year*2019*");
//
//	return 0;
////}
////BC72平均身高
//#include<stdio.h>
//int main()
//{
////	double a, b, c, d, e;
////	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
////	double average = (a + b + c + d + e) / 5.0;
////	printf("%.2f", average);
////	return 0;
////}
////BC73挂科危险
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n >= 10)
//		{
//			printf("danger++");
//		}
//		else if (n >= 4 && n <= 9)
//		{
//			printf("danger");
//		}
//		else
//		{
//			printf("good");
//		}
//	}
//	return 0;
//}
//BC74 HTTP状态码1.swith case  2.if else 3.创建一个函数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int HTTP = 0;;
//		while (scanf("%d", &HTTP) != EOF)
//		{
//			switch (HTTP)
//			{
//			case 200:
//				printf("OK\n");
//				break;
//			case 202:
//				printf("Accepted\n");
//				break;
//			case 400:
//				printf("Bad Request\n");
//				break;
//			case 403:
//				printf("Forbidden\n");
//				break;
//			case 404:
//				printf("Not Found\n");
//				break;
//			case 500:
//				printf("Internal Server Error\n"); 
//				break;
//			case 502:
//				printf("Bad Gateway\n"); 
//				break;
//			}
//		}
//	return 0;
//}
////BC75数字三角形
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 1; i <= n; i++)//行数
//		{
//			for (j = 1; j <=i; j++)//每行内的个数
//			{
//				printf("%d", j);
//				
//			}
//			printf("\n");
//		}
//	}
//	return 0;
////}
////BC76公务员面试  每组由七位数 去掉最高分和最低分，求出每组的平均成绩
//#include<stdio.h>
//int main()
//{
//	//设置最大的是a[6]最小的是a[0]
//	float arr[7] = { 0 };
//	float sum = 0;
//	int tmp = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%f %f %f %f %f %f %f", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]);
//	//运用冒泡排序求出最大值啊a【6】
//	for ( i = 0; i < 6; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			tmp = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = tmp;//求出最大值
//		}
//	}
//	for (j = 5; j > 0; j--)
//	{
//		if (arr[j] < arr[j - 1])
//		{
//			tmp = arr[j - 1];
//			arr[j - 1] = arr[j];
//			arr[j] = tmp;//求出最小值
//		}
//	}
//	for (tmp = j + 1; tmp < i; tmp++)//j=0,i=6跳出循环，来到这次运行
//	{
//		sum += arr[tmp];//sum=sum+arr[tmp]
//		//printf("%.2f", sum / 5.0);调试发现错误。
//	}
//	printf("%.2f", sum / 5.0);
//	return 0;
//}
//BC77有序序列插入一个数
#include<stdio.h>
int main()
{

	return 0;
}