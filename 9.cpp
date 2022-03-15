#include<stdio.h>
int main()
{
	int ch=0;
	int B=0;
	char password[20]={0};
	printf("输入密码:>");
	scanf("%s",password);
	while((ch=getchar())!='\n')
	{
		;
	 } 
	printf("请确认输入正确(T/F):>");
	B=getchar();
	if(B=='T')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("输入错误，请重试\n");
	 } 
	return 0;
	
}
