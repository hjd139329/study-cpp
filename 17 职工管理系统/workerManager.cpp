#include"workerManager.h"

//构造函数
WorkerManager::WorkerManager()
{
	//1.文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		//cout << "文件不存在" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}
	//2.文件存在，但是文件为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件为空" << endl;	
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}
	//3.文件存在，且有数据
	int num = this->get_EmpNum();
	cout << "当前职工人数为：" << num << endl;
	this->m_EmpNum = num;
	

	//开辟空间
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//把文件中数据读取到数组，初始化
	this->init_Emp();
	
	//打印输出查看测试
	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//	cout << "编号：" << this->m_EmpArray[i]->m_Id
	//		<< "姓名：" << this->m_EmpArray[i]->m_Name
	//		<< "职位：" << this->m_EmpArray[i]->m_DeptId
	//		<< endl;
	//}

	//存放职工数组的指针
	//Worker** m_EmpArray;
}
//展示菜单
void WorkerManager::Show_Menu()
{
	cout << "****************************" << endl;
	cout << "***欢迎使用职工管理系统!****" << endl;
	cout << "********0.退出管理程序******" << endl;
	cout << "********1.增加职工信息******" << endl;
	cout << "********2.显示职工信息******" << endl;
	cout << "********3.删除离职职工******" << endl;
	cout << "********4.修改职工信息******" << endl;
	cout << "********5.查找职工信息******" << endl;
	cout << "********6.按照编号排序******" << endl;
	cout << "********7.清空所有信息******" << endl;
	cout << "****************************" << endl;

}

//0-退出程序
void WorkerManager::exitSystem()
{
	cout << "已退出管理系统" << endl;
	system("pause");
	exit(0);//不管在哪里看到这个函数，程序都退出
}
//1-添加职工
void WorkerManager::add_Emp()
{
	cout << "请输入添加的职工数量" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		//寻找新的空间存放数据
		int newSize = this->m_EmpNum + addNum;//新的记录=原有+新添加的
		//开辟新的空间
		Worker** newSpace= new Worker * [newSize];
		
		//将原来空间的数据复制到新空间
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];//逐个复制
			}
		}
	
		for (int j = 0; j < addNum; j++)
		{
			int new_Id;
			string new_Name;
			int new_Did;

			cout << "请输入第" << j + 1<< "个人的编号" << endl;
			int i= 0;

			//判断输入的编号是否重复
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
					cout << "编号重复，请重新输入：" << endl;
					i = 1;
				}
				else
				{
					i = 0;
				}
			} while (i);
		
			cout << "请输入第" << j + 1 << "个人的姓名" << endl;
			cin >> new_Name;
			cout << "请输入第"<<j + 1<<"个人的职位\n"
				<< "1.员工\n" << "2.经理\n" << "3.总裁" << endl;
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
			//将创建的职工指针保存到数组中
			newSpace[this->m_EmpNum + j] = worker;
		}

		//释放原有空间
		delete[]this->m_EmpArray;
		//更改新空间指向
		this->m_EmpArray = newSpace;
		//更改职工个数
		this->m_EmpNum = newSize;
		this->m_FileIsEmpty = false;
		cout << "成功添加了" << addNum << "名新职工" << endl;
		this->save();
	}
	else
	{
		cout << "添加人数无效" << endl;
	}
	//清屏，按任意键回到目录
	system("pause");
	system("cls");
}

//将数据写到文件中
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//用输出的方式打开文件
	for (int i = 0; i < m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << "  "
			<< this->m_EmpArray[i]->m_Name << "  "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	//关闭文件
	ofs.close();
}


//获取当前文件中的职工数
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

//初始化数组，即从文件中读取数据到程序
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


//显示职工
void WorkerManager::show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者没有记录" << endl;
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

//判断职工是否存在
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
	return index;//返回的是职工的下标

}

//删除职工操作
void WorkerManager::del_Emp()
{
	if (this->m_FileIsEmpty)//判断文件是否为空或没有记录
	{
		cout << "文件不存在或者没有记录" << endl;
	}
	else
	{
		int id = 0;
		cout << "请输入您要删除的员工编号" << endl;
		cin >> id;
		int ret = this->is_Exit(id);
		if (ret == -1)
		{
			cout << "职工不存在" << endl;
		}
		else
		{
			for (int i = ret; i < this->m_EmpNum; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			this->save();//删除完成后同步保存到文件
		}
	}
	system("pause");
	system("cls");
}

//修改职工操作
void WorkerManager::mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空" << endl;
	}
	else
	{
		int id = 0;
		cout << "请输入您要修改的职工编号" << endl;
		cin >> id;
		int ret = this->is_Exit(id);
		if (ret == -1)
		{
			cout << "查无此人" << endl;
		}
		else
		{
			delete this->m_EmpArray[ret];//删除该编号职工所在的数组中的信息
			cout << "请输入您要修改的信息" << endl;

			int id = 0;
			string name = "";
			int dId = 0;

			cout << "请输入新的编号：" << endl;
			cin >> id;

			cout << "请输入新的姓名：" << endl;
			cin >> name;

			cout << "请输入新的职位：" << endl;
			cout << "1、职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
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
			cout << "修改成功" << this->m_EmpArray[ret]->m_DeptId << endl;
			this->save();
		}
	}
	system("pause");
	system("cls");
}

//查找职工函数
void WorkerManager::find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者没有记录" << endl;
	}
	
	else
	{
		cout << "请输入您要查找的方式：\n"
			<< "1.按照编号查找\n"
			<< "2.按照姓名查找\n"
			<< endl;
		int select;
		cin >> select;
		if (select == 1)
		{
			cout << "您将使用编号查找\n" 
				<<"请输入您要查找的编号："
				<<endl;
			int sel_Id;
			cin >> sel_Id;
			int ret = this->is_Exit(sel_Id);
			if (ret != -1)
			{
				cout << "您要查找的编号为：\n" << sel_Id << endl;
				cout << "信息为："  << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "查无此人" << endl;
			}

		}
		else if (select == 2)
		{
			cout << "您将使用姓名查找" << endl;
			cout << "请输入您要查找的姓名：" << endl;
			string sel_Name;
			cin >> sel_Name;
			bool flag = false;
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == sel_Name)
				{
					cout << "您要查找的人的信息为：" << endl;
					this->m_EmpArray[i]->showInfo();
					flag = true;
				}
			}
			if (flag != true)
			{
				cout << "查无此人" << endl;
			}

		}
		else
		{
			cout << "输入有误，请重新选择" << endl;
		}
	}
	system("pause");
	system("cls");
}

//排序操作
void WorkerManager::sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请输入您要排序的方式：\n"
			<< "1.升序\n"
			<< "2.降序" << endl;
		int select = 0;
		cin >> select;
		if (select == 1)
		{
			cout << "将进行升序操作：" << endl;
			//冒泡升序排序
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
			//选择排序升序
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
			cout << "将进行降序操作" << endl;
			//冒泡排序降序
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
			//选择排序降序
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
			cout << "输入有误" << endl;
		}
	}
}

//清空操作
void WorkerManager::cl_File()
{
	cout << "执行清空操作\n" 
		<<"1.确认清空\n"
		<<"2.返回"<<endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);//删除文件后重建
		ofs.close();
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				//删除堆区的每个职工对象
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
			//删除堆区数组指针
			delete this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}
		cout << "清空成功" << endl;
	}
	system("pause");
	system("cls");
}


//析构函数
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