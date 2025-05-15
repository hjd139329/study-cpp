#include<iostream>
using namespace std;
#include"workerManager.h"

int main()
{
	//测试员工类
	/*Worker* worker1 = NULL;
	worker1 = new Employee(1, "张三", 1);
	worker1->showInfo();*/

	//测试经理类
	//Worker* worker2 = NULL;
	//worker2 = new Manager(1, "李四", 2);
	//worker2->showInfo();
	//
	//测试总裁类
	//Worker* worker3 = NULL;
	//worker3 = new Boss(1, "王五", 1);
	//worker3->showInfo();



	WorkerManager wm;
	int choice = 0;
	while (true)
	{
		wm.Show_Menu();
		cout << "欢迎使用，请输入您的操作" << endl;
		cin >> choice;
		switch (choice)
		{
		
		case 0://退出
			wm.exitSystem();
			break;
		case 1://增加
			wm.add_Emp();
			break;
		case 2://显示
			wm.show_Emp();
			break;
		case 3://删除
		{	//测试职工是否存在
			/*int ret = wm.is_Exit(5);
			if (ret != -1)
			{
				cout << "职工存在" << endl;
			}
			else
			{
				cout << "职工不存在" << endl;
			}*/
			wm.del_Emp();
			break;
		}
		case 4://修改
			wm.mod_Emp();
			break;

		case 5://查找
			wm.find_Emp();
			break;

		case 6://排序
			wm.sort_Emp();
			break;
		case 7://清空
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