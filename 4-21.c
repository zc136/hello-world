//打印三角形图案
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int  n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			
//			for (j = 0; j <= i; j++)
//
//			{
//				printf("* ");
//			}
//				printf("\n");
//			
//		}
//	}
//	return 0;
//}
////BC59翻转直角三角形的图案
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int  n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = n; i>0; i--)
//		{
//			for (j =i ; j >0; j--)
//
//				printf("* ");
//			printf("\n");
//
//		}
//	}
//	return 0;
//}
//BC60打印带有空格的三角形图案
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//		int j = 0;
//		int  n = 0;
//		while (scanf("%d", &n) != EOF)
//		{
//			for (i = 0; i < n; i++)
//			{
//				for (j = 0; j < i - 1; j++);
//				{
//					printf(" ");
//				}
//				for (j = 0; j <= i; j++)
//				{
//					printf("* ");
//				}
//				
//				printf("\n");
//				
//			}
//		}
//	return 0;
//}
////BC61金字塔 翻转金字塔
////#include<stdio.h>
////int main()
////{
//	int i = 0;
//	int j = 0;
//	int  n = 0;
//	while(scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for(j = 0; j < n - i - 1; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//
//			{
//				printf("* ");
//			}
//			printf("\n");
//
//		}
//	}
////	return 0;
////}
////BC63菱形图案=正金字塔+翻转金字塔
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int  n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n - i - 1; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//
//			{
//				printf("* ");
//			}
//			printf("\n");
//
//		}
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <n-i-1; j++)
//
//			{
//				printf("* ");
//			}
//			printf("\n");
//
//		}
//
//	}
//	return 0;
//}
////BC64 k形图案 翻转直角三角形+直角三角形
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//		int j = 0;
//		int  n = 0;
//		while (scanf("%d", &n) != EOF)
//		{
//			for (i = n; i>0; i--)
//			{
//				for (j =i ; j >0; j--)
//	
//					printf("* ");
//				printf("\n");
//	
//			}
//			for (i = 1; i < n; i++)
//			{
//
//				for (j = 0; j <= i; j++)
//
//				{
// 
// +
//					printf("* ");
//				}
//				printf("\n");
//			}
//		}
//	return 0;
//}
////BC65箭图案??
//#include <stdio.h>
//int main()
//{
//	int n, i, j, k;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n - i; j++)
//			{
//				printf("  ");
//				for (k=0;k<=i;k++)
//				{
//					printf("*");
//				}
//				printf("\n");
//				for (i=0;i<n+1;i++)
//				{
//					for (j = 0; j < i; j++)
//					{
//						printf("  ");
//					}
//					for (k = 0; k < n + 1; k++)
//					{
//						printf("\n");
//					}
//				}
//
//
//			}
//		}
//	}
//	return 0;
////}
////BC66反写线性图案，正斜线性图案
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)//行数
//		{
//			for (j = 0; j < i; j++)//列数
//			{
//				printf(" ");
//			}
//			printf("*");
//			/*for (j = 0; j < n - i - 1; j++)
//			{
//				printf(" ");
//			}*/
//			printf("\n");
//		}
//	}
//	return 0;
//}
//正斜线性图案
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = n; i >0; i--)//行数
//		{
//			for (j = i-1; j >0; j--)//列数
//			{
//				printf(" ");
//			}
//			printf("*");
//			printf("\n");
//		}
////	}
////	return 0;
////}
////X形图案
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)//行数
//		{
//			for (j = 0; j < i; j++)//列数
//
//			{
//			            printf(" ");
//		    }
//			printf("*");
//			printf("\n");
//		}
//	}
//	return 0;
//}