//������--ȫ����--ջ{--����
//����new���������ٿռ䣬delete�ͷſռ�
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
////��Բ���ܳ�
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
//	cout << "�ܳ���" << c1.calculatezc() << endl;
//	system("pause");
//	return 0;
//
//}
//���ѧ���࣬���� ���� ѧ��
//��ѧ��ѧ�Ÿ�ֵ����ʾѧ����������ѧ��
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
//		cout << "��ʾ" << m_name <<endl<< "ѧ��" << m_id << endl;
//	}
//};
//int main()
//{
//	Student s1;
//	s1.m_id = 123456;
//	s1.m_name = "����";
//	s1.showstudent();
//	system("pause");
//	return 0;
//
//
//}
// �����������
#include<iostream>
using namespace std;

class Cube//�����������
{
	
public:
	//��ȡ����ߣ��õ������
	
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
	//��ȡ���
	int calculateS()
	{
		return 2 * m_l * m_w + 2 * m_w * m_h + 2 * m_l * m_h;
	}
	//��ȡ���
	int calculateV()
	{
		return m_h * m_l * m_w;
	}
private://����
	int m_l;
	int m_w;
	int m_h;
};
int main()
{
	Cube c1;//ͨ���࣬�Ӷ���ȡ���󣬴�������
	//���и�ֵ����
	c1.setl(10);
	c1.seth(10);
	c1.setw(10);
	cout << "����ǣ�" << c1.calculateS()<<endl; cout << "ti���ǣ�" << c1.calculateV() << endl;
	system("pause");
	return 0;
}
//���캯��
//����(){}
//��������
//~����(){}