//BC1 ʵ������֪
//#include <stdio.h>
//int main()
//{
//	printf("Practice makes perfect!\n");
//	return 0;
//}
//BC2���Ǵ�V
//#include<stdio.h>
//int main()
//{
//	printf("v v\n");
//	printf("vv\n");
//	printf("v\n");
//	return 0;
//}
//BC3ȷ����ͬ���������������ڴ���ռ�����ֽڣ������ͬ�����������ڴ���ռ����ֽ�
//#include <stdio.h>
//int main()
//{
//	printf("The size of short is %d bytes\n",sizeof(short));
//	printf("The size of int is %d bytes\n",sizeof(int));
//	printf("The size of long is %d bytes\n",sizeof(long));
//	printf("The size of long is %d bytes\n",sizeof(long long));
//	return 0;
//}
//BC4С�ɻ�
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
//BC5���̶�����
//#include<stdio.h>
//int main()
//{
//	int a = 1234;
//	//printf("%#o %#X\n", a, a);   0�ǰ˽���ǰ��ʾ
//	//��ʮ��������ǰ��ʾǰ��0X
//	printf("0%o, 0X%X", a, a);
//	return 0;
//
//}
//BC6ʮ����תΪʮ����
//#include<stdio.h>
//int main()
//{
//	int i = 0XABCDEF;
//	printf("%d\n", i);
//	return 0;
//}
//BC9printf�ķ���ֵ
//#include <stdio.h>
//int main()
//{
//	//char arr[] = "hello world!";
//	//printf("%s\n", arr);
//	int a = printf("hello world");//	���ܼ���\n  �������10���ַ�
//	printf("\n");//
//	printf("%d\n", a);
//	return 0;
//}
//BC10�ɼ������������
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
//BC11 ѧ����Ϣ�����������
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
//BC12 �ַ�������
//#include<stdio.h>
//int main()
//{
//	char a;
//	scanf("%s", &a);
//	int n = 0;//n��ʾ�ո��������ַ�
//	int i = 1;//i��ʾ����
//	int j = 0;
//	for (i =1; i < 6; i++)
//	{
//		for (j =5 - i; j > 0; j--)//j��ʾ��i��������5-i���ո�
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
////BC8 �ַ�ʥ����
//#include<stdio.h>
//int main(void)
//{
//	char a;
//	scanf("%s", &a);
//	int n = 5;//n��ʾ�ո��������ַ�
//	int i = 0;//i��ʾ����
//	int j = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		for (j = i; j < n; j++)//j��ʾ��i��������5-i���ո�
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
//BC13  ASCII��
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
//BC14���������յ����������
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%4d%2d%2d", &a, &b, &c);//��Ϊ������λ���� ���Լ���4���������2
//	printf("a=%d\nb=%d\nc=%d\n", a, b, c);
//
//	return 0;
//}
//BC15����������ֵ�Ĵ�С
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	//scanf("%d %d", &a, &b);//�����������������ֵ
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
//////BC16 �ַ�תASCII��
////#include<stdio.h>
////int main()
////{
////	char c ;
////	scanf("%c", &c);
////	printf("%d\n", c);
////
////	return 0;
////}
//////BC17������ʽ��ֵ
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
