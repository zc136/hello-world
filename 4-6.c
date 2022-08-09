#include<stdio.h>
#include<string.h>
//char* strtok(char* str,const char* sep);
//int main()
//{
//char arr[] = "wwww.123@com";
//char* p = "@.";
//char buf[1024] = { 0 };
//strcpy(buf, arr);
//char* ret = strtok(arr, p);
//printf("%s\n", ret);
//ret=strtok(NULL, p);
//printf("%s\n", ret);
//ret = strtok(NULL, p);
//printf("%s\n", ret);
//for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p));
//{
//	printf("%s\n", ret);
//}
//return 0;
//}
//int main()
//{
//	int arr1[10]= { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//                    
//	
//   	memcpy(arr2, arr1, 20);
//	printf("%d\n", arr2);
//		return 0;
	int main()
		{
		int arr1[] = { 1,2,3,4,5,6 };
		int arr2[] = { 1,5,4,3,2,1 };

		int ret=	memcmp(arr1, arr2, 8);
			printf("%d\n", ret);
			return 0;
		}
//}