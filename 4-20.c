////BC47�ж��ǲ�����ĸ
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
////BC48��ĸ��Сдת��
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
////bc49�ж��������Ĵ�С
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
////bc51 �������ж�
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
//////bc52�������ݳ̶�
////#include<stdio.h>
////int main()
////{
////
////	return 0;
////}
////BC53����һԪ���η���
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
////bc54����·�
//#include<stdio.h>
//int main()
//{
//	//ÿ���4 6 9 11 ����30��
//	// 1 3 5 7 8 10 12��31��
//	// Ȼ�����2�µ�����  ������29�죬��������28��
//	// ����������ж�
//	// 1.�İ�һ����&&���겻������||�İ���������
//	// �ж����
//	// (year%400==0&&year%100!=0)||yaer%400==0
//	//
////	//
////	//
////	return 0;
////}
////BC55�򵥼�����
//#include<stdio.h>
//void menu()//�˵�
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
//		printf("��ѡ��:>");
//		scanf("%d", &i);
//		if (i >= 1 && i <= 4)
//		{
//			printf("����������:>");
//			scanf("%d %d", &x, &y);
//			int ret = pa[i](x, y);
//			printf("%d\n", ret);
//		}
//		else if (i == 0)
//		{
//			printf("�˳�");
//		}
//		else
//		{
////			printf("ѡ�����\n");
////		}
////	} while (i);
////}
////BC56�߶�ͼ��
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
////BC57������ͼ��
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
////BC58��ӡֱ��������
//#include<stdio.h>
//int main()
//{
//	int j = 0;
//	int i = 0;
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)//����Ҫ���ڵ�������
//		{
//			for (j = 0; j <= i; j++)//��������
//			
//				printf("* ");
//				printf("\n");
//			
//		}
//	}
//	return 0;
//}
//BC59��תֱ�������ε�ͼ��