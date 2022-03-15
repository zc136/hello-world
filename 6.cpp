#include<stdio.h>
struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book pb={"高等数学",66};
	struct Book* a=&pb;
	printf("a=%s\n",(*a).name);
	printf("a=%d\n",(*a).price);
	//printf("a=%s\n",a->name);
    //printf("a=%d\n",a->price);
    return 0;
}
