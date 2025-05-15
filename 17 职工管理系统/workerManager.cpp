#include"workerManager.h"

//���캯��
WorkerManager::WorkerManager()
{
	//1.�ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		//cout << "�ļ�������" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}
	//2.�ļ����ڣ������ļ�Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ�Ϊ��" << endl;	
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}
	//3.�ļ����ڣ���������
	int num = this->get_EmpNum();
	cout << "��ǰְ������Ϊ��" << num << endl;
	this->m_EmpNum = num;
	

	//���ٿռ�
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//���ļ������ݶ�ȡ�����飬��ʼ��
	this->init_Emp();
	
	//��ӡ����鿴����
	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//	cout << "��ţ�" << this->m_EmpArray[i]->m_Id
	//		<< "������" << this->m_EmpArray[i]->m_Name
	//		<< "ְλ��" << this->m_EmpArray[i]->m_DeptId
	//		<< endl;
	//}

	//���ְ�������ָ��
	//Worker** m_EmpArray;
}
//չʾ�˵�
void WorkerManager::Show_Menu()
{
	cout << "****************************" << endl;
	cout << "***��ӭʹ��ְ������ϵͳ!****" << endl;
	cout << "********0.�˳��������******" << endl;
	cout << "********1.����ְ����Ϣ******" << endl;
	cout << "********2.��ʾְ����Ϣ******" << endl;
	cout << "********3.ɾ����ְְ��******" << endl;
	cout << "********4.�޸�ְ����Ϣ******" << endl;
	cout << "********5.����ְ����Ϣ******" << endl;
	cout << "********6.���ձ������******" << endl;
	cout << "********7.���������Ϣ******" << endl;
	cout << "****************************" << endl;

}

//0-�˳�����
void WorkerManager::exitSystem()
{
	cout << "���˳�����ϵͳ" << endl;
	system("pause");
	exit(0);//���������￴����������������˳�
}
//1-���ְ��
void WorkerManager::add_Emp()
{
	cout << "��������ӵ�ְ������" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		//Ѱ���µĿռ�������
		int newSize = this->m_EmpNum + addNum;//�µļ�¼=ԭ��+����ӵ�
		//�����µĿռ�
		Worker** newSpace= new Worker * [newSize];
		
		//��ԭ���ռ�����ݸ��Ƶ��¿ռ�
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];//�������
			}
		}
	
		for (int j = 0; j < addNum; j++)
		{
			int new_Id;
			string new_Name;
			int new_Did;

			cout << "�������" << j + 1<< "���˵ı��" << endl;
			int i= 0;

			//�ж�����ı���Ƿ��ظ�
			do
			{
				int num = 0;
				cin >> new_Id;
				for (int j = 0; j < this->m_EmpNum; j++)
				{
					if (new_Id == this->m_EmpArray[j]->m_Id)
					{
						num++;
					}
				}
				if (num!= 0)
				{
					cout << "����ظ������������룺" << endl;
					i = 1;
				}
				else
				{
					i = 0;
				}
			} while (i);
		
			cout << "�������" << j + 1 << "���˵�����" << endl;
			cin >> new_Name;
			cout << "�������"<<j + 1<<"���˵�ְλ\n"
				<< "1.Ա��\n" << "2.����\n" << "3.�ܲ�" << endl;
			cin >> new_Did;

			Worker* worker = NULL;
			switch (new_Did)
			{
			case 1:
				worker = new Employee(new_Id, new_Name, new_Did);
				break;
			case 2:
				worker = new Employee(new_Id, new_Name, new_Did);
				break;
			case 3:
				worker = new Employee(new_Id, new_Name, new_Did);
				break;
			default:
				break;
			}
			//��������ְ��ָ�뱣�浽������
			newSpace[this->m_EmpNum + j] = worker;
		}

		//�ͷ�ԭ�пռ�
		delete[]this->m_EmpArray;
		//�����¿ռ�ָ��
		this->m_EmpArray = newSpace;
		//����ְ������
		this->m_EmpNum = newSize;
		this->m_FileIsEmpty = false;
		cout << "�ɹ������" << addNum << "����ְ��" << endl;
		this->save();
	}
	else
	{
		cout << "���������Ч" << endl;
	}
	//��������������ص�Ŀ¼
	system("pause");
	system("cls");
}

//������д���ļ���
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//������ķ�ʽ���ļ�
	for (int i = 0; i < m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << "  "
			<< this->m_EmpArray[i]->m_Name << "  "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	//�ر��ļ�
	ofs.close();
}


//��ȡ��ǰ�ļ��е�ְ����
int WorkerManager::get_EmpNum()
{
	int id;
	string name;
	int dId;
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		num++;
	}
	ifs.close();
	return num;
}

//��ʼ�����飬�����ļ��ж�ȡ���ݵ�����
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int dId;
	int index = 0;//
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker* worker = NULL;
		if (dId == 1)
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2)
		{
			worker = new Manager(id, name, dId);
		}
		else 
		{
			worker = new Boss(id, name, dId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}

}


//��ʾְ��
void WorkerManager::show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ���û�м�¼" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			this->m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

//�ж�ְ���Ƿ����
int WorkerManager::is_Exit(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	return index;//���ص���ְ�����±�

}

//ɾ��ְ������
void WorkerManager::del_Emp()
{
	if (this->m_FileIsEmpty)//�ж��ļ��Ƿ�Ϊ�ջ�û�м�¼
	{
		cout << "�ļ������ڻ���û�м�¼" << endl;
	}
	else
	{
		int id = 0;
		cout << "��������Ҫɾ����Ա�����" << endl;
		cin >> id;
		int ret = this->is_Exit(id);
		if (ret == -1)
		{
			cout << "ְ��������" << endl;
		}
		else
		{
			for (int i = ret; i < this->m_EmpNum; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			this->save();//ɾ����ɺ�ͬ�����浽�ļ�
		}
	}
	system("pause");
	system("cls");
}

//�޸�ְ������
void WorkerManager::mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	else
	{
		int id = 0;
		cout << "��������Ҫ�޸ĵ�ְ�����" << endl;
		cin >> id;
		int ret = this->is_Exit(id);
		if (ret == -1)
		{
			cout << "���޴���" << endl;
		}
		else
		{
			delete this->m_EmpArray[ret];//ɾ���ñ��ְ�����ڵ������е���Ϣ
			cout << "��������Ҫ�޸ĵ���Ϣ" << endl;

			int id = 0;
			string name = "";
			int dId = 0;

			cout << "�������µı�ţ�" << endl;
			cin >> id;

			cout << "�������µ�������" << endl;
			cin >> name;

			cout << "�������µ�ְλ��" << endl;
			cout << "1��ְ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dId;
			Worker* worker = NULL;
			switch (dId)
			{
			case 1:
				worker = new Employee(id, name, dId);
				break;
			case2:
				worker = new Manager(id, name, dId);
				break;
			case 3:
				worker = new Boss(id, name, dId);
				break;
			default:
				break;
			}
			this->m_EmpArray[ret] = worker;
			cout << "�޸ĳɹ�" << this->m_EmpArray[ret]->m_DeptId << endl;
			this->save();
		}
	}
	system("pause");
	system("cls");
}

//����ְ������
void WorkerManager::find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ���û�м�¼" << endl;
	}
	
	else
	{
		cout << "��������Ҫ���ҵķ�ʽ��\n"
			<< "1.���ձ�Ų���\n"
			<< "2.������������\n"
			<< endl;
		int select;
		cin >> select;
		if (select == 1)
		{
			cout << "����ʹ�ñ�Ų���\n" 
				<<"��������Ҫ���ҵı�ţ�"
				<<endl;
			int sel_Id;
			cin >> sel_Id;
			int ret = this->is_Exit(sel_Id);
			if (ret != -1)
			{
				cout << "��Ҫ���ҵı��Ϊ��\n" << sel_Id << endl;
				cout << "��ϢΪ��"  << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "���޴���" << endl;
			}

		}
		else if (select == 2)
		{
			cout << "����ʹ����������" << endl;
			cout << "��������Ҫ���ҵ�������" << endl;
			string sel_Name;
			cin >> sel_Name;
			bool flag = false;
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == sel_Name)
				{
					cout << "��Ҫ���ҵ��˵���ϢΪ��" << endl;
					this->m_EmpArray[i]->showInfo();
					flag = true;
				}
			}
			if (flag != true)
			{
				cout << "���޴���" << endl;
			}

		}
		else
		{
			cout << "��������������ѡ��" << endl;
		}
	}
	system("pause");
	system("cls");
}

//�������
void WorkerManager::sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��������Ҫ����ķ�ʽ��\n"
			<< "1.����\n"
			<< "2.����" << endl;
		int select = 0;
		cin >> select;
		if (select == 1)
		{
			cout << "���������������" << endl;
			//ð����������
			/*for (int i = 0; i < this->m_EmpNum - 1; i++)
			{
				for (int j = 0; j < this->m_EmpNum - 1 - i; j++)
				{
					if (this->m_EmpArray[j]->m_Id > this->m_EmpArray[j + 1]->m_Id)
					{
						Worker* temp = this->m_EmpArray[j];
						this->m_EmpArray[j] = this->m_EmpArray[j + 1];
						this->m_EmpArray[j + 1] = temp;
					}
				}
			}*/
			//ѡ����������
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				int minOrMax = i;
				for (int j = i + 1; j < this->m_EmpNum; j++)
				{
					if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				if (minOrMax != i)
				{
					Worker* temp = this->m_EmpArray[i];
					this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
					this->m_EmpArray[minOrMax] = temp;
				}

			}
			this->save();
			this->show_Emp();
		}
		else if (select == 2)
		{
			cout << "�����н������" << endl;
			//ð��������
			/*for (int i = 0; i < this->m_EmpNum - 1; i++)
			{
				for (int j = 0; j < this->m_EmpNum - 1 - i; j++)
				{
					if (this->m_EmpArray[j]->m_Id < this->m_EmpArray[j + 1]->m_Id)
					{
						Worker* temp = this->m_EmpArray[j];
						this->m_EmpArray[j] = this->m_EmpArray[j + 1];
						this->m_EmpArray[j + 1] = temp;
					}
				}
			}*/
			//ѡ��������
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				int minOrMax = i;
				for (int j = i + 1; j < this->m_EmpNum; j++)
				{
					if (this->m_EmpArray[minOrMax]->m_Id< this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				if (minOrMax != i)
				{
					Worker* temp = this->m_EmpArray[i];
					this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
					this->m_EmpArray[minOrMax] = temp;
				}
			}
			this->save();
			this->show_Emp();
		}
		else
		{
			cout << "��������" << endl;
		}
	}
}

//��ղ���
void WorkerManager::cl_File()
{
	cout << "ִ����ղ���\n" 
		<<"1.ȷ�����\n"
		<<"2.����"<<endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);//ɾ���ļ����ؽ�
		ofs.close();
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				//ɾ��������ÿ��ְ������
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
			//ɾ����������ָ��
			delete this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}
		cout << "��ճɹ�" << endl;
	}
	system("pause");
	system("cls");
}


//��������
WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i] != NULL)
			{
				delete this->m_EmpArray[i];
			}
		}
		delete this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}