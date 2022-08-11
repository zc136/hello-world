#include<stdio.h>
#include<string.h>
#include<assert.h>
//char* my_strcpy(char* arr1, const char* arr2)
//{
//	// (arr1 != NULL);  
//	assert(arr1!=NULL);
//	 //(arr2 != NULL);
//	assert(arr1 != NULL);
//	char* ret = arr1;
//	while (*arr1 = *arr2)   /*  while (*arr1++=*arr2++)
//	                                   { 
//		                                   ;
//	                                             }*/
//	{
//		arr1++;
//		arr2++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "biy";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//char* strcpy(char* destination, const char* source);
//char* strcat(char* destination, const char* source);
//char* my_strcat(char* arr1, const char* arr2)
//{
//	// (arr1 != NULL);  
//	assert(arr1!=NULL);
//	 //(arr2 != NULL);
//	assert(arr1 != NULL);
//	char* ret = arr1;
//	while (*arr1 != '\0')
//	{
//		arr1++;      //找到目的字符串的'\0'
//	}
//	  while (*arr1++=*arr2++)    //追加
//	  { 
//		  ;
//	  }
//	return ret;
//}
//int main()
//{
//	char arr1[18] = "abcdef";//保证空间充足
//	char arr2[] = "biy";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int my_strcmp(const char* arr1, const char* arr2)
//{
//	// (arr1 != NULL);  
//	assert(arr1 != NULL);
//	//(arr2 != NULL);
//	assert(arr1 != NULL);
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == '\0')
//		{
//			return 0;
//		}
//			arr1++;
//			arr2++;
//		}
//		if (*arr1 > *arr2)
//			return 1;
//		else
//			return -1;
//	}
//int main()
//{
//	char* arr1= "abcdef";
//	char* arr2 = "biy";
//    int ret=my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "biy";
//	//strncpy 模拟实现
//	strncpy (arr1, arr2, 2);
//	return 0;
//}
//int main()
//{
//	char arr1[30] = "abcdefgh\0";
//	char arr2[] = "biy";
//	strncat (arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//int main()
//{
//	const char*p1 = "abcdef";
//	const char*p2 = "biy";
//	int ret= strncmp(p1, p2, 3);
//	printf("%d\n", ret);
//	return 0;
//}
//

int main()
{
	char* p1 = "abcdef";
	char* p3 = "def";
	char* ret = strstr(p1, p3);
	if (ret == NULL)
	{
		printf("字符串不存在\n");
	}
	else
	{
		printf("%s\n",ret);
		return 0;
	}
}





