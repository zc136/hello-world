//struct tag
//{
//	member -list;
////}variable-list;
#include<stdio.h>
#include <stdio.h>
//#pragma pack(8)//设置默认对齐数为8
//struct S1
//{
//    char c1;
//    int i;
//    char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//#pragma pack(1)//设置默认对齐数为1
//struct S2
//{
//    char c1;
//    int i;
//    char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//int main()
//{
//    //输出的结果是什么？
//    printf("%d\n", sizeof(struct S1));
//    printf("%d\n", sizeof(struct S2));
//    return 0;
//}
//输出结果：12    6
// #include <stdio.h>
//#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double  d;
//
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}

//}
//#include<stdio.h>
//
//struct S
//{
//	
//	int a;
//	char c;
//	double d;
//};
//void init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'z';
//	ps->d = 3.14;
//}
//void print1(struct  S tmp)
//{
//	printf("%d,%c,%lf\n", tmp.a, tmp.c, tmp.d);
//}
//void print2(struct S *ps)
//{
//	printf("%d,%c,%lf\n", ps->a,ps->c,ps->d);
//}
//
//int main()
//{
//	struct S s = { 0 };
//	init(&s);
//	print1(s);
//	print2(&s);
//	return 0;
//}
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//
//}
//enum Day
//{
//	mon,
//   tues=8,
//    wed,
//   thur,
//};
//int main()
//{
//	//enum Day d = mon;
//	printf("%d %d %d %d\n", mon, tues, wed, thur);
//	return 0;
//}
//union un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}
//int sys()
//{
//	union un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//
//	//int a = 1;
//	//return    *(char*)&a;
//}
//int main()
//{
//	int a = 1;
//	int ret = sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//int main()
//{
//	//enum Day d = mon;
//	printf("%d %d %d %d\n", mon, tues, wed, thur);
//	return 0;
//}
union un
{
	int i;
	char arr[5];
	
};
int main()
{
	union un u;
	printf("%d\n", sizeof(u));
	return 0;
}









