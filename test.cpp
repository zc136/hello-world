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
//		m_sittingroom = "����";
//		m_bedroom = "����";
//	}
//public:
//	string m_sittingroom;
//private:
//	string m_bedroom;
//};
//void goodGay(Building* building)
//{
//	cout << "����" << building->m_sittingroom << endl;
//	cout << "����" << building->m_bedroom << endl;
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
////���������
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
//�̳�
//class ���ࣺ�̳з�ʽ ����
//���������ʸ���ĳ�Աʱ ����������
////���μ̳�
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
////	cout << "nianling��= " << st.tuo::m_age << endl;
////}
////int main()
////{
////	test01();
////	return 0;
////}
////��̬
////����ָ�������ָ���������
//class Animal {
//public:
//	virtual void speak()
//	{
//		cout << "����˵��" << endl;
//	}
//};
//class cat :public Animal {
//public:
//	void speak()
//	{
//		cout << "Сè˵��" << endl;
//	}
//};
//class dog :public Animal {
//public:
//	void speak()
//	{
//		cout << "Сgou˵��" << endl;
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
////������
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
//	//����ָ�������ָ���������
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_num1 = 10;
//	abc->m_num2 = 20;
//	cout << "��ӵ��� " << abc->getResult() << endl;
//	delete abc;
//}
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}
//virtual ����ֵ���� ������ �������б�=0��
//virtual void func����=0������virtual void func() {}
//�������﷨  virtual ~��������{}
//���������﷨
//virtual ~����()=0;
//  ����::~����(){}