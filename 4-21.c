//��ӡ������ͼ��
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
////BC59��תֱ�������ε�ͼ��
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
//BC60��ӡ���пո��������ͼ��
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
////BC61������ ��ת������
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
////BC63����ͼ��=��������+��ת������
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
////BC64 k��ͼ�� ��תֱ��������+ֱ��������
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
////BC65��ͼ��??
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
////BC66��д����ͼ������б����ͼ��
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)//����
//		{
//			for (j = 0; j < i; j++)//����
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
//��б����ͼ��
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = n; i >0; i--)//����
//		{
//			for (j = i-1; j >0; j--)//����
//			{
//				printf(" ");
//			}
//			printf("*");
//			printf("\n");
//		}
////	}
////	return 0;
////}
////X��ͼ��
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)//����
//		{
//			for (j = 0; j < i; j++)//����
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