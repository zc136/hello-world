#include<iostream>
using namespace std;
#include<algorithm>
#include<string>
#include<map>
#include<vector>
#define CEHUA 0
#define MEISHU 1
#define YANFA  2
#include<ctime>

/*
��˾��Ƹ10��Ա��ABCDEFGHI,10Ա�����빫˾����Ҫָ�ɲ��Ź���
������䲿�ź͹���
ͨ��multimap���в��� key���ű��  valueԱ��
�ֲ�����ʾԱ����Ϣ*/


class Worker
{
public:
	string m_Name;
	int m_Salary;
};
void creatWorker(vector<Worker>& v)
{
	//����Ա��
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 10000 + 10000;   //10000---19999
		v.push_back(worker);
	}
}
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{//Ա������
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int deptid = rand() % 3;
		m.insert(make_pair(deptid, *it));
	}
}
void showWorkerByGourp(multimap<int, Worker>& m)
{
	cout << "�߻����ţ�" << endl;
	 multimap<int,Worker>::iterator pos= m.find(CEHUA);
	 int count = m.count(CEHUA);
	 int index = 0;
	 for (; pos != m.end()&&index< count; pos++,index++)
	 {
		 cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;

     }
	 cout << "�������ţ�" << endl;
	  pos = m.find(MEISHU);
	  count = m.count(MEISHU);
	  index = 0;
	 for (; pos != m.end() && index < count; pos++, index++)
	 {
		 cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;

	 }
	 cout << "�з����ţ�" << endl;
	 pos = m.find(YANFA);
	 count = m.count(YANFA);
	 index = 0;
	 for (; pos != m.end() && index < count; pos++, index++)
	 {
		 cout << "������" << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;

	 }
}
int main()
{
	srand((unsigned int)time(NULL));
	vector<Worker>vWorker;
	creatWorker(vWorker);

	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);
	showWorkerByGourp(mWorker);

	system("pause");
	return 0;
}