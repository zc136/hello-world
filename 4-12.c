#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//
//}
//void Test()
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;}






	void Test(void)
	{
		char* str = (char*)malloc(100);

		strcpy(str, "hello");
		
		free(str);//free释放的指向str的空间后，并不会把str变为null
		str = NULL;
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
