//代码区--全局区--栈{--堆区
//利用new操作符开辟空间，delete释放空间
//#include <iostream>
//using namespace std;
//int* func()
//{
//
//	int* p = new int(10);
//	return p;
//}
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//
//}
////求圆的周长
//#include <iostream>
//using namespace std;
//double PI = 3.14;
//class Circle
//{
//public:
//	int m_r;
//	double calculatezc()
//	{
//		return 2 * PI * m_r;
//	}
//};
//int main()
//{
//	Circle c1;
//	c1.m_r = 10;
//	cout << "周长：" << c1.calculatezc() << endl;
//	system("pause");
//	return 0;
//
//}
//设计学生类，属性 姓名 学号
//给学生学号赋值，显示学生的姓名和学号
//#include<iostream>
//using namespace std;
//class Student
//{
//
//public:
//	string m_name;
//	int m_id;
//	void showstudent()
//	{
//		cout << "显示" << m_name <<endl<< "学号" << m_id << endl;
//	}
//};
//int main()
//{
//	Student s1;
//	s1.m_id = 123456;
//	s1.m_name = "张三";
//	s1.showstudent();
//	system("pause");
//	return 0;
//
//
//}
// 设计立方体类
#include<iostream>
using namespace std;

class Cube//设计立方体类
{
	
public:
	//获取长宽高，得到长宽高
	
	void setl(int l)
	{
		m_l = l;
	}
	int getl()
	{
		return m_l;
	}
	void setw(int w)
	{
		m_w = w;
	}
	int getw()
	{
		return m_w;
	}
	void seth(int h)
	{
		m_h = h;
	}
	int geth()
	{
		return m_h;
	}
	//获取面积
	int calculateS()
	{
		return 2 * m_l * m_w + 2 * m_w * m_h + 2 * m_l * m_h;
	}
	//获取体积
	int calculateV()
	{
		return m_h * m_l * m_w;
	}
private://属性
	int m_l;
	int m_w;
	int m_h;
};
int main()
{
	Cube c1;//通过类，从而获取对象，创建对象
	//进行赋值操作
	c1.setl(10);
	c1.seth(10);
	c1.setw(10);
	cout << "面积是：" << c1.calculateS()<<endl; cout << "ti积是：" << c1.calculateV() << endl;
	system("pause");
	return 0;
}
//构造函数
//类名(){}
//析构函数
//~类名(){}