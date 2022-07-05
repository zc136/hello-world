#include <iostream>
using namespace std;
#define MAX 1000
#include<string>
void showMenu()
{
	cout << "**********************" << endl;
	cout << "*****1.添加联系人*****" << endl;
	cout << "*****2.显示联系人*****" << endl;
	cout << "*****3.删除联系人*****" << endl;
	cout << "*****4.查找联系人*****" << endl;
	cout << "*****5.修改联系人*****" << endl;
	cout << "*****6.清空联系人*****" << endl;
	cout << "*****0.退出通讯录*****" << endl;
	cout << "**********************" << endl;

}
//设计联系人的结构体
struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;

};
//通讯录的结构体
struct Addressbooks
{
	struct Person personArray[MAX];
	int m_Size;
};
void addPerson(Addressbooks* abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "通讯录满了" << endl;
		return;
	}
	else
	{
		string name;
		cout << "请输入名字" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		cout << "性别" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		int sex = 0;
		while (1)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入错误" << endl;

		}
		cout << "请输入年龄" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		cout << "请输入电话号码" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		cout << "请输入地址" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		abs->m_Size++;
		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}
void showPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名" << abs->personArray[i].m_Name << "\t";
			cout << "性别" <<( abs->personArray[i].m_Sex == 1 ? "男":"女" )<< "\t";
			cout << "年龄" << abs->personArray[i].m_Age << "\t";
			cout << "电话" << abs->personArray[i].m_Phone << "\t";
			cout << "地址" << abs->personArray[i].m_Addr<<endl;
		}
	}
	system("pause");
	system("cls");
}
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
		else
		{
			return -1;
		}
	}
}
void deletePerson(Addressbooks* abs)
{
	cout << "请输入删除的名字" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void findPerson(Addressbooks* abs)
{
	cout << "请输入查找的人" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "姓名" << abs->personArray[ret].m_Name << "\t";
		cout << "性别" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄" << abs->personArray[ret].m_Age << "\t";
		cout << "电话" << abs->personArray[ret].m_Phone << "\t";
		cout << "地址" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void modifyPerson(Addressbooks* abs)
{
	cout << "请输入要修改的人" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	{
		if (ret != -1)
		{
			string name;
			cout << "请输入修改的名字" << endl;
			cin >> name;
			abs->personArray[ret].m_Name = name;
			cout << "请输入性别" << endl;
			cout << "1---男" << endl;
			cout << "2---女" << endl;
			int sex = 0;
			while (1) 
			{
				cin >> sex;
				if (sex == 1 || sex == 2)
				{
					abs->personArray[ret].m_Sex = sex;
					break;
				}
				cout << "输入错误，重新输入" << endl;
			}
			cout << "请输入年龄" << endl;
			int age = 0;
			cin >> age;
			abs->personArray[ret].m_Age = age;
			cout << "请输入联系人的电话号码" << endl;
			string phone;
			cin >> phone;
			abs->personArray[ret].m_Phone = phone;
			cout << "请输入家庭住址" << endl;
			string address;
			cin >> address;
			abs->personArray[ret].m_Addr = address;
			cout << "修改成功" << endl;

		}
		else
		{
			cout << "查无此人" << endl;
		}
		system("pause");
		system("cls");
	}

}
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "通讯录清空" << endl;
	system("pause");
	system("cla");
}
int main()
{
	Addressbooks abs;
	abs.m_Size = 0;
	int select = 0;
	while (1)
	{

		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:
			addPerson(&abs);//添加
				break;
		case 2:
			showPerson(&abs);//显示
			break;
		case 3:
			deletePerson(&abs);//删除
			break;
		case 4://查找
			findPerson(&abs);
			break;
		case 5:
			modifyPerson(&abs);
			break;
		case 6:
			cleanPerson(&abs);
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
			

		}	
	}
}