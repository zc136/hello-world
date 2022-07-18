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
公司招聘10个员工ABCDEFGHI,10员工进入公司中需要指派部门工作
随机分配部门和工资
通过multimap进行插入 key部门编号  value员工
分部门显示员工信息*/


class Worker
{
public:
	string m_Name;
	int m_Salary;
};
void creatWorker(vector<Worker>& v)
{
	//创建员工
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "员工";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 10000 + 10000;   //10000---19999
		v.push_back(worker);
	}
}
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{//员工分组
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int deptid = rand() % 3;
		m.insert(make_pair(deptid, *it));
	}
}
void showWorkerByGourp(multimap<int, Worker>& m)
{
	cout << "策划部门：" << endl;
	 multimap<int,Worker>::iterator pos= m.find(CEHUA);
	 int count = m.count(CEHUA);
	 int index = 0;
	 for (; pos != m.end()&&index< count; pos++,index++)
	 {
		 cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;

     }
	 cout << "美术部门：" << endl;
	  pos = m.find(MEISHU);
	  count = m.count(MEISHU);
	  index = 0;
	 for (; pos != m.end() && index < count; pos++, index++)
	 {
		 cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;

	 }
	 cout << "研发部门：" << endl;
	 pos = m.find(YANFA);
	 count = m.count(YANFA);
	 index = 0;
	 for (; pos != m.end() && index < count; pos++, index++)
	 {
		 cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;

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