//BC18������ʽ��ֵ
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a / b;
//	int d = a % b;
//	printf("%d %d", c, d);
//	return 0;
//}
////BC19���������λ��
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < 4; i++)
//	{
//	int	ret  = n % 10;//ȡ��
//	printf("%d", ret);
//	n /= 10;
//	}
//	return 0;
//}
////BC20  ���� 
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = (a +b) % 100;
//	printf("%d", ret);
//
//	return 0;
//}
//
	//BC21�������ĸ�λ����
//#include <stdio.h>
//int main()
//{
//	float a = 0;
//	scanf("%f", &a);
//	int ret = (int)a % 10;
//	printf("%d", ret);
//	return 0;
//}
////BC22������
//#include<stdio.h>
//float NUM(x)
//{
//	return(3.156 * 10000000 * x);
//}
//
//int main()
//{
//	int a = 20;
//	int ret = NUM(a);
//	printf("%d", ret);
//	return 0;
//}
//BC23ʱ��ת��
//BC24ƽ���ּ���
//#include<stdio.h>
//int main()
//{
//	float a, b, c;
//	scanf("%f %f %f", &a, &b, &c);
//	float num = a + b + c;
//	float average = num / 3;
//	printf("%.2f %.2f", num, average);
//	return 0;
//}
//BC25��������ָ��
//#include<stdio.h>
//int main()
//{
//	int a, b;
//		
//		scanf("%d %d", &a,&b);
//		float c =(b^2);
//		float d = a / c;
//		printf("%.2f", d);
//	return 0;
//}
////BC26���������ε�������ܳ�
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	double circumference = a + b + c;
//	//double d = (a + b + c);
//	double p = circumference / 2.0;
//	double area = sqrt(p*(p - a)*(p - b)*(p - c));
//	printf("circumference=%.2f area=%.2f", circumference, area);
//	return 0;
//}
//BC27������������
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double r, v;
//	double PI = 3.1415926;
//	scanf("%lf", &r);
//	v = 4.0 / 3.0 * 3.1415926 * r * r * r;
//	printf("%.3lf", v);
//
//	return 0;
//}
//BC28��Сдת��
//#include<stdio.h>
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	//getchar();
//	printf("%c", a + 32);
//	return 0;
//}
//BC29 2��n�η�
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", 2 << (n - 1));
//	//2�ڶ����Ƶ�Ϊ0000 0010
//	//4�Ƕ����Ƶ�Ϊ0000 0100
//	//8�Ƕ����Ƶ�Ϊ0000 1000
//	return 0;
//}
//BC30��������
//#include<stdio.h>
//int main()
//{
//	int n, h, m;
//	while (scanf("%d %d %d", &n, &h, &m))
//	{
//		if (m % h == 0)
//		{
//			printf("%d", n - (m / h));//��m���Ӻ�ţ���Ƿ������һƿ
//		}
//		else
//		{
//			printf("%d", n - (m / h) - 1);
//		}
//		
//	}
//	return 0;
//}
////BC31������Ϣ
//#include<stdio.h>
//int main()
//{
//	printf("i lost my cellphone!");
//	return 0;
//}
////BC32���ѧ����Ϣ
//#include <stdio.h>
//int main()
//{
//	printf("name age gender\n");
//	printf("---------------\n");
//	printf("jack 18    man\n");
//	return 0;
//}
//BC34����ƽ���ɼ�
//#include<stdio.h>
//int main()
//{
//	int  a, b, c, d, e;
//	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//	double n = (a + b + c + d + e) / 5.0;
//	printf("%.1f", n);
//	return 0;
//}
////// 
//////BC35�ж���ĸ
//#include<stdio.h>
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	
//	if ((a >= 65 && a <= 91) || (a >= 97 && a <= 123))
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
