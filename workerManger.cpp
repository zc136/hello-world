#include "workerManger.h"

WorkerManger::WorkerManger()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//读文件//
	//文件不存在的情况
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		//初始化属性  初始化记录人数
		this->m_EmpNum = 0;
		//初始化数组指针

		this->m_EmpArray = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//文件存在  并且没有记录
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件为空" << endl;
		this->m_EmpNum = 0;
		//初始化数组指针

		this->m_EmpArray = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//文件存在，记录数据
	int num = this->get_EmpNum();
	cout << "职工人数为：" << num << endl;
	this->m_EmpNum = num;
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	this->init_Emp();
	/*for (int i = 0; i < this->m_EmpNum; i++)
	{
		cout << "职工编号: " << this->m_EmpArray[i]->m_id
			<< "姓名： " << this->m_EmpArray[i]->m_name
			<< "部门编号：" << this->m_EmpArray[i]->m_Deptid << endl;
	}*/
}
int  WorkerManger::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//打开文件，读

	int id;
	string name;
	int did;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		//记录人数
		num++;
	}
	ifs.close();
	return num;
}
void WorkerManger::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int did;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		Worker* worker = NULL;
		if (did == 1)
		{
			//worker = new Employee(id, name, did);//员工

		}
		else if (did == 2)
		{
			worker = new Manager(id, name, did);//经理

		}

		else
		{
			worker = new Boss(id, name, did);//老板

		}
		this->m_EmpArray[index] = worker;
		index++;

	}
	
	ifs.close();

}

void WorkerManger::save() {
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_id << ""<< this->m_EmpArray[i]->m_name << ""
			<< this->m_EmpArray[i]->m_Deptid << endl;

	}
	ofs.close();

}
void WorkerManger::Add_Emp()
{
	cout << "请输入添加职工的数量：" << endl;
	int addNum = 0;//保存用户的数量
	cin >> addNum;
	if (addNum > 0)
	{
		//计算添加的空间大小
		int newSize = this->m_EmpNum + addNum;
		 Worker**newSpace = new Worker * [newSize];
		 if (this->m_EmpArray != NULL) {
			 for (int i = 0; i < this->m_EmpNum; i++)
			 {
				 newSpace[i] = this->m_EmpArray[i];
			 }
		 }
		 for (int i = 0; i < addNum; i++)
		 {
			 int id;
			 string name;
			 int dSelect;
			 cout << "输入：" << i + 1 << "职工编号：" << endl;
			 cin >> id;
			 cout << "输入：" << i + 1 << "职工名字：" << endl;
			 cin >> name;
			 cout << "选择位子" << endl;
			 cout << "1.员工" << endl;
			 cout << "2.经理" << endl;
			 cout << "3.老板" << endl;
			 cin >> dSelect;
			 Worker* worker = NULL;
				 switch (dSelect)
				 {
				 case 1:
					 //worker =new Employee(id, name, 1);
					 break;
				 case 2:
					 worker = new Manager(id, name, 2);
					 break;
				 case 3:
					 worker = new Boss(id, name, 3);
					 break;
				 default:
					 break;
				 }
				 newSpace[this->m_EmpNum + i] = worker;

		 }
		 delete[]this->m_EmpArray;
		 this->m_EmpArray = newSpace;
		 this->m_EmpNum= newSize;
		 this->m_FileIsEmpty = false;
		 cout << "添加成功" << addNum << "员工" << endl;
		 this->save();
	}
	else
	{
		cout<< "数据有误" << endl;
	}
	system("pause");
	system("cls");
}
WorkerManger::~WorkerManger()
{
	if (this->m_EmpArray != NULL)
	{
		delete[]this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

void WorkerManger::Show_Menu()//展示菜单

{
	cout << "****************************" << endl;
	cout << "*****欢迎使用职工管理系统***" << endl;
	cout << "*********0.退出管理系统*****" << endl;
	cout << "*********1.增加职工信息*****" << endl;
	cout << "*********2.显示职工信息*****" << endl;
	cout << "*********3.删除离职职工*****" << endl;
	cout << "*********4.修改职工信息*****" << endl;
	cout << "*********5.查找职工信息*****" << endl;
	cout << "*********6.按照编号排序*****" << endl;
    cout << "*********7.清空所有文档*****" << endl;
	cout << "****************************" << endl;
}
//退出实现
void WorkerManger::exitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}
void WorkerManger::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			this->m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}
void WorkerManger::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在" << endl;

	}
	else
	{
		cout << "请输入要删除的职工编号" << endl;
		int id = 0;
		cin >> id;
		int index =this->IsExist(id);
		if (index != -1)
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			this->save();
			cout << "删除成功" << endl;
	}
		else
		{
			cout << "删除失败" << endl;
		}
	}
	system("pause");
	system("cls");
}

int  WorkerManger::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_id == id)
		{
			index = i;
				break;
		}
	}
	return index; 
}
void  WorkerManger::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在" << endl;
	}
	else
	{
		cout << "修改职工的编号" << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			delete this->m_EmpArray[ret];
			int newId = 0;
			string newName = "";
			int dSelect = 0;
			cout << "查到：" << id << "职工，输入新职工号" << endl;
			cin >> newId;
			cout << "姓名：" << endl;
			cin >> newName;
			cout << "请输入职位" << endl;
			cout << "1.员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> dSelect;
			Worker* worker = NULL;
			switch (dSelect)
			{
				
			case 1:
				//worker =new Employee(newId,newName,dSelect);
				break;
			case 2:
				worker = new Manager(newId, newName, dSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, dSelect);
				break;
			default:
				break;

			}
			this->m_EmpArray[ret] = worker;
			cout << "修改成功" << this->m_EmpArray[ret]->m_Deptid << endl;
			this->save();

		}
		else
		{
			cout << "修改失败" << endl;
		}
	}
	system("pause");
	system("cls");
}
void WorkerManger::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在" << endl;
	 }
	else
	{
		cout << "请输入查找的方式" << endl;
		cout << "1.职工编号查找" << endl;
		cout << "2.姓名查找" << endl;
		int select = 0;
		cin >> select;
		if (select == 1)
		{
			int id;
			cout << "输入查找的职工编号" << endl;
			cin >> id;
			int ret = IsExist(id);
			if (ret != -1)
			{
				cout << "查找成功" << endl;
				this->m_EmpArray[ret]->showInfo();

			}
			else
			{
				cout << "查无此人" << endl;
			}
		}
		else if (select == 2)
		{
			string name;
			cout << "查找的姓名" << endl;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (m_EmpArray[i]->m_name == name)
				{
					cout << "查找成功" 
						<< this->m_EmpArray[i]->m_id
						<< "信息如下：" << endl;
					flag = true;
					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
			{
				cout << "查找此人" << endl;
			}
		}
		else
		{
			cout << "输入的选项有误" << endl;
		}

	}
	system("pause");
	system("cls");
}
void  WorkerManger::Sort_Emp()
{

	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请选择排序方式" << endl;
		cout << "1.按照职工号进行升序" << endl;
		cout << "2.按照工号进行降序" << endl;
		int select = 0;
		cin >> select;
		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; i < m_EmpNum; i++)
			{
				if (select == 1)
				{
					if (this->m_EmpArray[minOrMax]->m_id > this->m_EmpArray[j]->m_id)
					{
						minOrMax = j;
					}
				}
					else
					{
					if (this->m_EmpArray[minOrMax]->m_id > this->m_EmpArray[j]->m_id)
					{
						minOrMax = j;
					}
					}
				
			}
			if (i != minOrMax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax] = temp;
			}
		}
		cout << "排序成功，结果是：" << endl;
		this->save();//保存
		this->Show_Emp();//展示所有职工
	}
}

void  WorkerManger::Clean_File()
{
	cout << "确认清空" << endl;
	cout << "1.确认" << endl;
	cout << "2.取消" << endl;
	int select=0;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
}
			delete[]this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}
		cout << "清空成功" << endl;
	}
	system("pause");
	system("cls");
}

