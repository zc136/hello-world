//#include<stdio.h>
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* pr = (int*)(&a + 1);
//	printf("%d %d", *(a + 1), *(pr - 1));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a[5] = { 1,2,3,4,5 };
//    int* pa1 = (int*)(&a + 1);
//    int* pa2 = (int*)((int)a + 1);
//    printf("%x %x", pa1[-1], *pa2);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa1 = (int*)(&aa + 1);
//	int* pa2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(pa1 - 1), *(pa2 - 1));
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//¶ººÅ±í´ïÊ½
//	int* p;
//	p = a[0];
//	printf("%d", a[0]);
//	return 0;
//}
