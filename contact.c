#include "contact.h"
void InitContact( struct Contact* ps)
{
	ps->data = (struct  PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	LoadContact(ps);
}
void CheckCapacity(struct Contact* ps);
void LoadContact(struct Contact* ps)
{
	int tmp = 0;
	PeoInfo; tmp = 0;
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact::%s\n", strerror(errno));
		return;
	}
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		CheckCapacity(ps);
		ps->data[ps->size]= tmp;
		ps->size++;

	}

	fclose(pfRead);
	pfRead = NULL;
}
void CheckCapacity(struct Contact*ps)
{
	if (ps->size == ps->capacity)
	{
		struct PeoInfo*ptr= realloc(ps->data, (ps->capacity + 2) * sizeof( PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity+= 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}

	}
}




void AddContact(struct Contact* ps)
{
	CheckCapacity(ps);
	//��⵱ǰͨѶ¼������  �������� ����������
	printf("����������:>");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:>");
	scanf("%d", &(ps->data[ps->size].age));
	//printf("�������Ա�:>");
	//scanf("%s", ps->data[ps->size].sex);
	printf("���������:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->size].addr);

	ps->size++;
	printf("��ӳɹ�\n");
}

void ShowContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ�ո�\n");

	}
	else
	{
		int i = 0;
		printf("%20s\t %4s\t %5s\t %12s\t %20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%s\t %s\t %s\t %s\t %s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
  static int FindByName (struct Contact* ps, char  name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		(0 == strcmp(ps->data[i].name, name));
	{
		return i;
	 }
	}
	return -1;
}
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;
	printf("������ɾ��������:>");
	scanf("%s", name);
	pos = FindByName(ps,name);
	if (pos==-1)
	{
		printf("ɾ���˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
void SearchContact(const struct Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("�����˵�����\n");
	scanf("%s", name);
	 pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		int i = 0;
		printf("%20s\t %4s\t %5s\t %12s\t %20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%s\t %s\t %s\t %s\t %s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		
	   }
	}

void ModifyContact(struct Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("�������޸�������:>");
	scanf("%s", name);
	 pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("�޸��˵���Ϣ������\n");
		
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("����������:>");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("���������:>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[pos].addr);
		printf("�ɹ�\n");
	}
}
void SortContact(struct Contact* ps)
{

}
void DestroyContact(struct Contact* ps)
{
	free(ps->data);
		ps ->data = NULL;
}
void SaveContact(struct Contact* ps)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return 0;
	}
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(PeoInfo), 1, pfWrite);
	
	}
	fclose(pfWrite);
	pfWrite = NULL;
}