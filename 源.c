////BC36��������
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	float b = 0;
//	scanf("%d %f", &a, &b);
//	float BMI = a / (b * b);
//	if (BMI > 18.5 && BMI < 23.9)
//	{
//		printf("normal");
//	}
//	else
//	{
//		printf("abnormal");
//	}
//	return 0;
//}
////BC37����
//#include <stdio.h>
//int main()
//{
//	double price = 0;
//	int mon, day, num;
//	scanf("%lf %d %d %d",&price, &mon, &day, &num);
//	 price = price * (mon == 11 && day == 11 ? 0.7 : (mon == 12 && day == 12) ? 0.8 : 1);
//	if (num == 1)
//	{
//		 price = price - 50;
//	}
//	if (price < 0)
//	{
//		price = 0;
//	}
//	printf("%.2f", price);
//
//	return 0;
////}
////BC38����ˮ�ɻ�
//#include<stdio.h>
//int SUM(int n)
//{
//	int a = n / 10000;//ȡ��
//	int a1 = n % 10000;//ȡ��
//	int b = n / 1000;//ȡ��
//	int b1 = n % 1000;//ȡ��
//	int c = n / 100;//ȡ��
//	int c1 = n % 100;//ȡ��
//	int d = n / 10;//ȡ��
//	int d1 = n % 10;//ȡ��
//	if (n = a1 * a + b1 * b + c1 * c + d1 * d)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		if (SUM(i) == 1)//����һ������
//		{
//			printf("%d ", i);
//		}
////	}
////	return 0;
////}
////*******BC39����ǰ����******ð������
//#include<stdio.h>
//    int main()
//    {
//        int n = 0;
//        scanf("%d", &n);
//        int i = 0;
//        int j = 0;
//        int tmp = 0;
//        int arr[10];
//        //ð������
//        for (i = 0; i < n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        for (i = 0; i < n - 1; i++)
//        {
//            
//            for (j = 0; j < n - 1 - i; j++)
//            {
//                if (arr[j] < arr[j + 1])
//                {
//                    tmp = arr[j];
//                    arr[j] = arr[j + 1];
//                    arr[j + 1] = tmp;
//                }
//            }
//        }
//        for (i = 0; i < 10; i++)
//        {
//            printf("%d ", arr[i]);
//        }
//        return 0;
//    }
//	
////BC40��ѡ�糤
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	char ch;
//	while ((scanf("%c", &ch) != EOF))//����0ʱ ��������
//	{
//		if (ch == '0')
//			break;
//		if (ch == 'A')
//		{
//			a++;
//		}
//		if (ch == 'B')
//		{
//			b++;
//		}
//	}
//	if (a > b)
//	{
//		printf("A");
//	}
//	if (a < b)
//	{
//		printf("B");
//	}
//	return 0;
////}
////BC41���������
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a>=140)
//	{
//		printf("genius");
//	}
//	else
//	{
//		printf("sb");
//	}
//	return 0;
//}
////BC42�����ɼ�
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if(a >= 90 && a <= 100)
//	{
//		printf("perfect");
//	}
//	else
//	{
////	printf("good");
//// }
////	return 0;
////}
////BC43�������
//#include<stdio.h>
//int main()
//{
//	    int a = 0;
//		//while (scanf("%d", &a)!=EOF)��������
//		//scanf("%d", &a);��������
//		if(a >= 60)
//		{
//			printf("perfect");
//		}
//		else
//		{
//		printf("good");
//	 }
//
//	return 0;
//
//}
////BC44�ж���ż��
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (scanf("%d",&a) != EOF)
//	{
//		if (a%2== 0)
//		{
//			printf("even\n");
//		}
//		else
//		{
//			printf("odd\n");
//		}
//	}
//	return 0;
////}
////BC45��߷���
////#/*include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[3];
//	for (i = 0; i < 4; i++)
//		    {
//	 scanf("%d ",&arr[i]);
//	       }
//	
//		int tmp = 0;
//		for (i = 0; i <4-1; i++)
//		{
//			for (j = 0; j < 3 - j; j++)
//			{
//				if (arr[j] < arr[j + 1])
//				{
//					tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//			}
//		}
//		for (i = 0; i <3; i++)
//			        {		            printf("%d ", arr[i]);
//		        }
//	
//	return 0;
//}*/
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf ("%d\n",a > b?a > c ? a : c : b > c ? b : c);
//
//	return 0;
//}
////BC46�ж���Ԫ�����Ǹ���
//#include<stdio.h>
//int main()
//{
//	char ch;
//	while (scanf("%c", &ch) != EOF)
//	{
//		getchar();
//		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//		{
//			printf("vowel\n");
//		}
//		else
//		{
//			printf("consonant\n");
//		}
//	}
//	return 0;
//}