#include  <stdio.h>
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//һ��ָ��p���������� 
//	print(p, sz);
//	return 0;
//}
//char*(* pf)(char*, const char*);
//char* (*pf[4])(char*, const char*);
//void menu()
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
//	int (*pa[])(int x, int y) = { 0,Add  ,sub,mul,div };
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
//			printf("ѡ�����\n");
//		}
//	}
//	while (i);
//}



