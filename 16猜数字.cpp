//��������Ϸ1-100
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("************************\n");
	printf("**********1.piay********\n");
	printf("**********2.exit********\n");
}
void game()
{
	int random_num=rand()%100+1;
	int input=0;
	while(1)
	{ 
		printf("����������>:");
		scanf("%d",&input);
		if(input>random_num)
		{
			printf("�´���\n");
		}
		else if(input<random_num)
		{
			printf("��С��\n");	
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}	
}
	int main()
    {   	
		int input = 0;
		srand((unsigned int)time(NULL));
		do
		{
			menu();
			printf("��ѡ��>:");
			scanf("%d",&input);
			switch(input)
			{
				case 1:
					game();
					break;
				case 2:
				    break;
				default:
				    printf("��ѡ��,��������!\n");
				break;	
			}
		}while(input);
		return 0;
	} 
	

