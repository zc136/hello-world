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
typedf; struct Contact//ͨѶ¼����
{
	struct PeoInfo *data;
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼���������
}Contact;
void InitContact(struct Contact* ps);//��������
void AddContact(struct Contact* ps);//������Ϣ��ͨѶ¼��
void ShowContact(const struct Contact* ps);//��ӡͨѶ¼����Ϣ
void Delcontact(struct Contact* ps);//ɾ��ָ������ϵ��
void SearchContact(struct Contact* ps);
void ModifyContact(struct Contact* ps);
void SortContact(struct Contact* ps);
void DestroyContact( struct Contact* ps);
void SaveContact(struct Contact* ps);

void LoadContact(struct Contact* ps);