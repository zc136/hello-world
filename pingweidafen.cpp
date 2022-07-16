//有5名选手，10个评委进行打分，去除掉最高分和最低分
// 创建无名选手，放到vector
// 遍历vector数组，取出来每一个选手，用for循环，把分放到deque里面
// sort算法排序  去除最高和最低
// deque容器遍历一遍 累加总分
// 获取平均分
//
#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>
#include<string>
class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;
	int m_Score;


};
void creatPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];
		int score = 0;
		Person p(name, score);
		v.push_back(p);
	}
}
void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;     //60~100
			//rand()%41    ---0~40
			d.push_back(score);
		
		}
		cout << "选手: " << it->m_Name << "分数： " <<endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;
		//排序
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;

		}
		int avg = sum / d.size();
		//将平均分赋值到选手上
		it->m_Score = avg;
	}
	
}
void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << it->m_Name << "平均分数 " << it->m_Score << endl;

	}
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	vector<Person>v;
	creatPerson(v);
	//打分
 setScore(v);
 showScore(v);

	system("pause");
	return 0;
}
