#include "workerManger.h"

WorkerManger::WorkerManger()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//���ļ�//
	//�ļ������ڵ����
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		//��ʼ������  ��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��

		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//�ļ�����  ����û�м�¼
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ��" << endl;
		this->m_EmpNum = 0;
		//��ʼ������ָ��

		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//�ļ����ڣ���¼����
	int num = this->get_EmpNum();
	cout << "ְ������Ϊ��" << num << endl;
	this->m_EmpNum = num;
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	this->init_Emp();
	/*for (int i = 0; i < this->m_EmpNum; i++)
	{
		cout << "ְ�����: " << this->m_EmpArray[i]->m_id
			<< "������ " << this->m_EmpArray[i]->m_name
			<< "���ű�ţ�" << this->m_EmpArray[i]->m_Deptid << endl;
	}*/
}
int  WorkerManger::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//���ļ�����

	int id;
	string name;
	int did;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		//��¼����
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
			//worker = new Employee(id, name, did);//Ա��

		}
		else if (did == 2)
		{
			worker = new Manager(id, name, did);//����

		}

		else
		{
			worker = new Boss(id, name, did);//�ϰ�

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
	cout << "���������ְ����������" << endl;
	int addNum = 0;//�����û�������
	cin >> addNum;
	if (addNum > 0)
	{
		//������ӵĿռ��С
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
			 cout << "���룺" << i + 1 << "ְ����ţ�" << endl;
			 cin >> id;
			 cout << "���룺" << i + 1 << "ְ�����֣�" << endl;
			 cin >> name;
			 cout << "ѡ��λ��" << endl;
			 cout << "1.Ա��" << endl;
			 cout << "2.����" << endl;
			 cout << "3.�ϰ�" << endl;
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
		 cout << "��ӳɹ�" << addNum << "Ա��" << endl;
		 this->save();
	}
	else
	{
		cout<< "��������" << endl;
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

void WorkerManger::Show_Menu()//չʾ�˵�

{
	cout << "****************************" << endl;
	cout << "*****��ӭʹ��ְ������ϵͳ***" << endl;
	cout << "*********0.�˳�����ϵͳ*****" << endl;
	cout << "*********1.����ְ����Ϣ*****" << endl;
	cout << "*********2.��ʾְ����Ϣ*****" << endl;
	cout << "*********3.ɾ����ְְ��*****" << endl;
	cout << "*********4.�޸�ְ����Ϣ*****" << endl;
	cout << "*********5.����ְ����Ϣ*****" << endl;
	cout << "*********6.���ձ������*****" << endl;
    cout << "*********7.��������ĵ�*****" << endl;
	cout << "****************************" << endl;
}
//�˳�ʵ��
void WorkerManger::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}
void WorkerManger::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�������" << endl;
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
		cout << "�ļ�������" << endl;

	}
	else
	{
		cout << "������Ҫɾ����ְ�����" << endl;
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
			cout << "ɾ���ɹ�" << endl;
	}
		else
		{
			cout << "ɾ��ʧ��" << endl;
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
		cout << "�ļ�������" << endl;
	}
	else
	{
		cout << "�޸�ְ���ı��" << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			delete this->m_EmpArray[ret];
			int newId = 0;
			string newName = "";
			int dSelect = 0;
			cout << "�鵽��" << id << "ְ����������ְ����" << endl;
			cin >> newId;
			cout << "������" << endl;
			cin >> newName;
			cout << "������ְλ" << endl;
			cout << "1.Ա��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
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
			cout << "�޸ĳɹ�" << this->m_EmpArray[ret]->m_Deptid << endl;
			this->save();

		}
		else
		{
			cout << "�޸�ʧ��" << endl;
		}
	}
	system("pause");
	system("cls");
}
void WorkerManger::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�������" << endl;
	 }
	else
	{
		cout << "��������ҵķ�ʽ" << endl;
		cout << "1.ְ����Ų���" << endl;
		cout << "2.��������" << endl;
		int select = 0;
		cin >> select;
		if (select == 1)
		{
			int id;
			cout << "������ҵ�ְ�����" << endl;
			cin >> id;
			int ret = IsExist(id);
			if (ret != -1)
			{
				cout << "���ҳɹ�" << endl;
				this->m_EmpArray[ret]->showInfo();

			}
			else
			{
				cout << "���޴���" << endl;
			}
		}
		else if (select == 2)
		{
			string name;
			cout << "���ҵ�����" << endl;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (m_EmpArray[i]->m_name == name)
				{
					cout << "���ҳɹ�" 
						<< this->m_EmpArray[i]->m_id
						<< "��Ϣ���£�" << endl;
					flag = true;
					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
			{
				cout << "���Ҵ���" << endl;
			}
		}
		else
		{
			cout << "�����ѡ������" << endl;
		}

	}
	system("pause");
	system("cls");
}
void  WorkerManger::Sort_Emp()
{

	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�������" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ" << endl;
		cout << "1.����ְ���Ž�������" << endl;
		cout << "2.���չ��Ž��н���" << endl;
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
		cout << "����ɹ�������ǣ�" << endl;
		this->save();//����
		this->Show_Emp();//չʾ����ְ��
	}
}

void  WorkerManger::Clean_File()
{
	cout << "ȷ�����" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.ȡ��" << endl;
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
		cout << "��ճɹ�" << endl;
	}
	system("pause");
	system("cls");
}

