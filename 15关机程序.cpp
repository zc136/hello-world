#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[10]={0};
	system("shutdown -s -t 60");               //system��Ҫ��stdlib.h
	while(1)
	{
		printf("���Խ���1�����ڹػ�,�������:��������ȡ���ػ���\n������:>");
		scanf("%s",input);
		if( strcmp (input, "������")==0)      //strcmp��Ҫ��string.h 
		{
		system("shutdown -a"); 
		break;
	}
	}
	return 0;
}
