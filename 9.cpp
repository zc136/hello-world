#include<stdio.h>
int main()
{
	int ch=0;
	int B=0;
	char password[20]={0};
	printf("��������:>");
	scanf("%s",password);
	while((ch=getchar())!='\n')
	{
		;
	 } 
	printf("��ȷ��������ȷ(T/F):>");
	B=getchar();
	if(B=='T')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("�������������\n");
	 } 
	return 0;
	
}
