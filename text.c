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
	struct Contact con;   //con就是通讯录 包含data指针 size capacity
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
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
			printf("退出登录\n");
			break;
		case SAVE:
			SaveContact(&con);
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}
	while (input);

	return 0;
}