#include<iostream>
using namespace std;
#include"workerManager.h"

int main()
{
	//����Ա����
	/*Worker* worker1 = NULL;
	worker1 = new Employee(1, "����", 1);
	worker1->showInfo();*/

	//���Ծ�����
	//Worker* worker2 = NULL;
	//worker2 = new Manager(1, "����", 2);
	//worker2->showInfo();
	//
	//�����ܲ���
	//Worker* worker3 = NULL;
	//worker3 = new Boss(1, "����", 1);
	//worker3->showInfo();



	WorkerManager wm;
	int choice = 0;
	while (true)
	{
		wm.Show_Menu();
		cout << "��ӭʹ�ã����������Ĳ���" << endl;
		cin >> choice;
		switch (choice)
		{
		
		case 0://�˳�
			wm.exitSystem();
			break;
		case 1://����
			wm.add_Emp();
			break;
		case 2://��ʾ
			wm.show_Emp();
			break;
		case 3://ɾ��
		{	//����ְ���Ƿ����
			/*int ret = wm.is_Exit(5);
			if (ret != -1)
			{
				cout << "ְ������" << endl;
			}
			else
			{
				cout << "ְ��������" << endl;
			}*/
			wm.del_Emp();
			break;
		}
		case 4://�޸�
			wm.mod_Emp();
			break;

		case 5://����
			wm.find_Emp();
			break;

		case 6://����
			wm.sort_Emp();
			break;
		case 7://���
			wm.cl_File();
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}