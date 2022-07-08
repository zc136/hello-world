#include <iostream>
using namespace std;
#include<string>


////friend
//class Building
//{
//public:
//	friend void goodGay(Building* building);
//	Building()
//	{
//		m_sittingroom = "客厅";
//		m_bedroom = "卧室";
//	}
//public:
//	string m_sittingroom;
//private:
//	string m_bedroom;
//};
//void goodGay(Building* building)
//{
//	cout << "访问" << building->m_sittingroom << endl;
//	cout << "访问" << building->m_bedroom << endl;
//}
//void test01()
//{
//	Building building;
//	goodGay(&building);
//}
//int main()
//{
//	test01();
//
//	system("pause");
////	return 0;
////}
////运算符重载
//class person {
//public:
//	int m_a;
//	int m_b;
//	person operator+(person&p)
//	{
//		person temp;
//		temp.m_a = this->m_a + p.m_a;
//		temp.m_b = this->m_b + p.m_b;
//		return temp;
//	}
//	
//
//};
//void test()
//{
//	person p1;
//	p1.m_a = 10;
//	p1.m_b = 10;
//	person p2;
//	p2.m_a = 20;
//	p2.m_b = 20;
//	person p = p1 + p2;
//	cout << "p.m_a= " << p.m_a <<endl<< "p.m_b= " << p.m_b << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//继承
//class 子类：继承方式 父类
//子类对象访问父类的成员时 加上作用域
////菱形继承
//class Animal {
//public:
//	int m_age;
//};
//class sheep :public Animal {
//
//};
//class tuo :public Animal {
//
//};
//class sheeptuo :public sheep, public tuo
//{
//
//};
//void test01()
//{
//	sheeptuo st;
////	st.tuo::m_age = 18;
////	cout << "nianling是= " << st.tuo::m_age << endl;
////}
////int main()
////{
////	test01();
////	return 0;
////}
////多态
////父类指针或引用指向子类对象
//class Animal {
//public:
//	virtual void speak()
//	{
//		cout << "动物说话" << endl;
//	}
//};
//class cat :public Animal {
//public:
//	void speak()
//	{
//		cout << "小猫说话" << endl;
//	}
//};
//class dog :public Animal {
//public:
//	void speak()
//	{
//		cout << "小gou说话" << endl;
//	}
//};
//void Dospeak(Animal& animal)
//{
//	animal.speak();
//}
//void test01()
//{
//	cat cat;
//	dog dog;
////	Dospeak(cat);
////	Dospeak(dog);
////	
////}
////int main()
////{
////	test01();
////
////	system("pause");
////	return 0;
////}
////计算器
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 1;
//	}
//	int m_num1;
//	int m_num2;
//};
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_num1 + m_num2;
//	}
//};
//void test02()
//{
//	//父类指针或引用指向子类对象
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_num1 = 10;
//	abc->m_num2 = 20;
//	cout << "相加等于 " << abc->getResult() << endl;
//	delete abc;
//}
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}
//virtual 返回值类型 函数名 （函数列表）=0；
//virtual void func（）=0；或者virtual void func() {}
//虚析构语法  virtual ~类名（）{}
//纯虚析构语法
//virtual ~类名()=0;
//  类名::~类名(){}