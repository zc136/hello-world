#include <stdio.h>
#include<string.h>
typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void Print1(Stu tmp)
{
	
	printf("name: %s\n", tmp.name);
	printf("age: %d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("sex: %s\n", tmp.sex);
}
	int main()
	{
		Stu s = ("ÕÅ" ,"15649986786", "ÄÐ");
		Print1(s);
		return 0;
}
