#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[10]={0};
	system("shutdown -s -t 60");               //system需要用stdlib.h
	while(1)
	{
		printf("电脑将在1分钟内关机,如果输入:我是猪，就取消关机！\n请输入:>");
		scanf("%s",input);
		if( strcmp (input, "我是猪")==0)      //strcmp需要用string.h 
		{
		system("shutdown -a"); 
		break;
	}
	}
	return 0;
}
