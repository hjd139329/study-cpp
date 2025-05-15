#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
//1.展示菜单函数
void showMenu()
{
	cout << "************************" << endl;
	cout << "****  1.添加联系人  ****" << endl;
	cout << "****  2.显示联系人  ****" << endl;
	cout << "****  3.删除联系人  ****" << endl;
	cout << "****  4.查找联系人  ****" << endl;
	cout << "****  5.修改联系人  ****" << endl;
	cout << "****  6.清空联系人  ****" << endl;
	cout << "****  0.退出通讯录  ****" << endl;
	cout << "************************" << endl;
}

//联系人结构体
struct Linkman
{
	string name;//姓名
	int sex = 0;//性别（1=男，0=女）
	int age = 0;//年龄
	long long p_number = 0;//电话号
	string address;//住址
};

//1.添加联系人函数
void addNumber(struct Linkman A[], int len, int* loc)//传入联系人数组和数组长度
{
	//1.写入联系人名字
	int i = *loc + 1;
	string new_name;
	cout << "请输入联系人名字：" << endl;
	cin >> new_name;
	A[i].name = new_name;
	//2.写入联系人的性别
	int new_sex;
	cout << "请输入联系人的性别：        （1=男，0=女）" << endl;
	cin >> new_sex;
	while (new_sex != 0 && new_sex != 1)
	{
		cout << "输入违法，请重新输入：       （1=男，0=女）";
		cin >> new_sex;
	}
	A[i].sex = new_sex;
	//3.写入联系人的年龄
	int new_age;
	cout << "请输入联系人的年龄：" << endl;
	cin >> new_age;
	A[i].age = new_age;
	//4.写入联系人的电话
	long long new_pnumber;
	cout << "请输入联系人的电话：" << endl;
	cin >> new_pnumber;
	A[i].p_number = new_pnumber;
	//5.写入联系人的地址
	string new_address;
	cout << "请输入联系人的地址：" << endl;
	cin >> new_address;
	A[i].address = new_address;
	*loc = i++;
	cout << "添加成功" << endl;
}
//2.显示联系人函数
void printNumber(struct Linkman P[], int len, int loc)
{
	for (int i = 0; i <= loc; i++)
	{
		cout << left<<setw(5)<<"\t姓名：" << P[i].name;
		if (P[i].sex == 1)
		{
			cout <<setw(5)<< "\t性别：男";
		}
		else
		{
			cout << setw(5)<< "\t性别：女";

		} 
			cout<<setw(3)<<"\t年龄：" << P[i].age
			<< setw(12)<<"\t电话：" << P[i].p_number
			<<  setw(10)<<"\t地址：" << P[i].address <<endl;
	}
	cout << "显示完成！" << endl;
}
//3.删除联系人
void delNumber(struct Linkman D[], int len, int* loc)
{
	
	struct Linkman s0[1];//默认的结构体数组s0，用来删除元素
	string del_name;
	cout << "请输入您要删除的联系人：" << endl;
	cin >> del_name;
	int i = 0;
	int j = 0;
	for (i = 0; i < *loc + 1; i++)
	{

		if (D[i].name == del_name)
		{
			D[i] = s0[0];
			j++;//用来判断是否执行了删除操作
			break;
		}
	}
	if (i == *loc + 1)//当此条件成立，代表for循环执行到底了，未找到对应联系人
	{
		cout << "查无此人！" << endl;
	}
	if (i != *loc)//如果被删除的联系人不是最后一个，则把最后一个放在被删除的位置
	{
		D[i] = D[*loc];
	}
	if (j == 1)//当j=1时，代表执行了删除操作，loc要-1
	{
		*loc -=1;
	}

}
//4.查找联系人，找到并打印
void findNumber(struct Linkman F[], int len, int loc)
{
	cout << "请输入您要查找的联系人的姓名：" << endl;
	string find_name;
	cin >> find_name;
	for (int i = 0; i < loc + 1; i++)
	{
		if (F[i].name == find_name)
		{
			cout << left << setw(20) << "姓名：" << F[i].name;
			if (F[i].sex == 1)
			{
				cout << setw(15) << "性别：男";
			}
			else
			{
				cout << setw(15) << "性别：女";

			}
			cout << setw(15) << "年龄：" << F[i].age
				<< setw(30) << "电话：" << F[i].p_number
				<< setw(20) << "地址：" << F[i].address << endl;
		}
	}

}
//5.修改联系人
void modifyNumber(struct Linkman M[], int len, int loc)
{
	cout << "请输入您要修改联系人的姓名：" << endl;
	string modify_old_number;
	cin >> modify_old_number;
	for (int i = 0; i < loc + 1; i++)
	{
		if (M[i].name == modify_old_number)
		{
			cout << "请输入联系人新姓名：" << endl;
			string modify_new_name;
			cin >> modify_new_name;
			M[i].name = modify_new_name;

			cout << "请输入联系人新性别：" << endl;
			int modify_new_sex;
			cin >> modify_new_sex;
			while (modify_new_sex != 0 && modify_new_sex != 1)
			{
				cout << "输入违法，请重新输入：       （1=男，0=女）";
				cin >> modify_new_sex;
			}
			M[i].age = modify_new_sex;

			cout << "请输入联系人新年龄：" << endl;
			int modify_new_age;
			cin >> modify_new_age;
			M[i].age = modify_new_age;

			cout << "请输入联系人新电话号：" << endl;
			long long modify_new_pnumber;
			cin >> modify_new_pnumber;
			M[i].p_number = modify_new_pnumber;

			cout << "请输入联系人新地址：" << endl;
			string modify_new_adress;
			cin >> modify_new_adress;
			M[i].address = modify_new_adress;
		}
	}
}

//6.清空联系人
void clearNumber(struct Linkman C[], int len, int* loc)
{
	struct Linkman s0[1];
	for (int i = 0; i < *loc + 1; i++)
	{
		C[i] = s0[0];
	}
}
int main()
{
	struct Linkman list[10];//创建通讯录数组存放联系人
	int len = sizeof(list) / sizeof(list[0]);//len，数组长度
	int loc = -1;//用来记录此时通讯录中的人数，比人数少1，方便寻找合适的位置写入
	showMenu();//打印菜单
	int menu = 999;
	cin >> menu;
	if (menu == 0)
	{
		cout << "退出系统！" << endl;
	}
	while (menu != 0)
	{
		switch (menu)
		{
		case 1:
			if (loc > 9)
			{
				cout << "通讯录已满，请先删除不必要联系人！" << endl;
				break;
			}
			else
			{
				cout << "*执行添加联系人操作*" << endl;
				addNumber(list, len, &loc);
				break;
			}				

		case 2:
			if (loc == -1)
			{
				cout << "联系列表为空！" << endl;
				break;
			}
			else
			{
				printNumber(list, len, loc);
				cout << endl;
				break;
			}
		case 3:
			if (loc == -1)
			{
				cout << "通讯录无任何联系人！" << endl;
				break;
			}
			else
			{
				delNumber(list, len, &loc);
				cout << endl;
				break;
			}
		case 4:
			if (loc == -1)
			{
				cout << "通讯录无任何联系人！" << endl;
				break;
			}
			else
			{
				findNumber(list, len, loc);
				cout << endl;
				break;
			}
		case 5:
			if (loc == -1)
			{
				cout << "通讯录无任何联系人！" << endl;
				break;
			}
			else
			{
				modifyNumber(list, len, loc);
				cout << endl;
				break;
			}
		case 6:
			clearNumber(list, len, &loc);
			break;
		}
		showMenu();//打印菜单
		cout << "*请输入您要执行的操作*" << endl;
		cin >> menu;//确保操作结束后，给用户再次操作的选择。
	}
	cout << "感谢您的使用" << endl;

	

	system("pause");
	return 0;
}