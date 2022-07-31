#include <stdio.h>
#include "contact.h"
void menu()
{
	printf("*****************************\n");
	printf("******1.add     2.del********\n");
	printf("******3.search  4.modify*****\n");
	printf("******5.show    6.sort*******\n");
	printf("******0.exit    7.save*******\n");
	printf("*****************************\n");
	printf("*****************************\n");
}
	
int main()
{
	int input = 0;
	struct Contact con;   //con����ͨѶ¼ ����dataָ�� size capacity
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
		AddContact(&con);
			break;
		case DEL :
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			//SORTContact(&con);
			break;
		case EXIT:
			DestroyContact(&con);
			printf("�˳���¼\n");
			break;
		case SAVE:
			SaveContact(&con);
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}
	while (input);

	return 0;
}