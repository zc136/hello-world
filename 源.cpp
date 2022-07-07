#include <iostream>
using namespace std;
//class person {
//public:
//	person() { cout << "无参构造函数" << endl;
//	}
//	person(int a)
//	{
//		age = a;
//		cout << "有参构造函数" << endl;
//	}
//	~person() {
//		cout << "析构函数" << endl;
//	}
//	person(const person& p)
//	{
//		age = p.age;
//		cout << "拷贝构造函数" << endl;
//	}
//public:
//	int age;
//};
//void test1()
//{
//	person p;
//
//}
//void test2()
//{
//	person p1(10);
//}
//int main()
//{
//	//person p;
//	test1();
//	test2();
//	system("pause");
////	return 0;
////}
////深浅拷贝
//class person {
//public:
//	person(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
//	{
//
//	}
//	int m_A;
//	int m_B;
//	int m_C;
//};
//void test1()
//{
//	person p(30, 20, 10);
//	cout << "m_A=" << p.m_A << endl;
//	cout << "m_B=" << p.m_B << endl; cout << "m_C=" << p.m_C << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}
////static
//// 
//// 
//// 
//// 
//class person {
//
//public:
//	static int m_a;
//
//};
//int person::m_a = 100;
//void test1()
//{
//	person p;
//	cout << p.m_a << endl;
//	person p2;
//	p2.m_a = 2000;
//	cout << p.m_a << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}
////this
class person {

public:
	person(int age)
	{
		this->age = age;
	}
	int age;
};
void test1()
{
	person p1(18);
	cout << p1.age << endl;
}
void test2()
{
	person p2(10);
	cout << p2.age << endl;
}
int main()
{
	test1();
	test2();
	system("pause");
	return 0;
}