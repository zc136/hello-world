#include<stdio.h>
void menu()
{
	
	printf("********************************************\n");
	printf("***************1.add     2.sub**************\n");
	printf("***************3.mul     4.div**************\n");
	printf("***************          0.exit**** ********\n");
	printf("********************************************\n");
	printf("********************************************\n");

}
int Add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
int main()
{
	int i = 0;
	int x = 0;
	int y = 0;
	int (*pa[])(int x, int y) = { 0,Add  ,sub,mul,div };
	do
	{ 
		menu();
		printf("请选择:>");
		scanf("%d", &i);
		if (i >= 1 && i <= 4)
		{
			printf("输入两个数:>");
			scanf("%d %d", &x, &y);
			int ret = pa[i](x, y);
			printf("%d\n", ret);
		}
		else if (i == 0)
		{
			printf("退出");
		}
		else
		{
			printf("选择错误\n");
		}
	}
	while (i);
}
