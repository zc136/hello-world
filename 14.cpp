#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	int i=0;
	char  password[20]={0};
	for(i=0;i<3;i++)
	{
		printf("����������:>");
		scanf("%s",password);
		if(strcmp(password,"123456")==0)
		{
			printf("��½�ɹ�\n");
			break;
		}
	}
	if(i==3)
		printf("������������˳�����\n");
	return 0;
}
