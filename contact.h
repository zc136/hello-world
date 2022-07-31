//#define MAX 1000
#define DEFAULT_SZ 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<errno.h>
enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};
typedf; struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;
typedf; struct Contact//通讯录类型
{
	struct PeoInfo *data;
	int size;//记录当前已经有的元素个数
	int capacity;//当前通讯录的最大容量
}Contact;
void InitContact(struct Contact* ps);//声明函数
void AddContact(struct Contact* ps);//增加信息到通讯录中
void ShowContact(const struct Contact* ps);//打印通讯录的信息
void Delcontact(struct Contact* ps);//删除指定的联系人
void SearchContact(struct Contact* ps);
void ModifyContact(struct Contact* ps);
void SortContact(struct Contact* ps);
void DestroyContact( struct Contact* ps);
void SaveContact(struct Contact* ps);

void LoadContact(struct Contact* ps);