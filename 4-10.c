#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int* p = (int*)calloc(10 , sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	// free函数用来释放动态开辟的空间的
//	//
//	free(p);
//	p = NULL;
//	return 0;
//}

//改正1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//改正2
char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}
void Test(void)
{
	char* str = NULL;
	str= GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}



//第二题//随机值
char* GetMemory(void)
{
	char p[] = "hello world";
	return p;
}
void Test(void)
{
	char* str = NULL;
	str= GetMemory();
	printf(str);
}
int main()
{
	Test();
	return 0;
}


//第三题


void GetMemory(char** p,int num)
{
	*p = (char*)malloc(100);
}
void Test(void)
{
	char* str = NULL;
	GetMemory(&str,100);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}
//
////第四题
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	//str = NULL;

	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
}
}

int main()
{
	Test();
	return 0;
}