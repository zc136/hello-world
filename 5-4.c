////自由下落
//#include<stdio.h>
//int main()
//{
//	float h =100;
////	float sum = 100;
////	h = h / 2;//第一次落地
////	for (int i = 2; i <= 10; i++)
////	{
////		sum = sum + 2 * h;
////		h = h / 2;
////	}
////	printf("%f %f", h,sum);
////	return 0;
////}
////杨辉三角
//#include<stdio.h>
//int main()
//{
//	int i, j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100][100] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			arr[i][0] = 1;
//			arr[i][i] = 1;
//		}
//	}
//	for (i = 2; i < n; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
////	return 0;
////}
////最小公倍数
//#include<stdio.h>
//int main()
//{
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	int m = a > b ? a : b;
//	while (1)
//	{
//		if ((m % a == 0) && (m % b == 0))
//		{
//			printf("%d", m);
//			break;
//		}
//		m++;
//	}
//	return 0;
//}
