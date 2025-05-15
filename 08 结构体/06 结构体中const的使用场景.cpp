//#include<iostream>
//using namespace std;
//#include<string>
//
//
//struct Student
//{
//	string name;
//	int age = 0;
//	int score = 0;
//};
////地址传递比值传递节省内存，因为值传递会赋值原值。
//void PrintStudent(const struct Student *p)//加入const，即使传入实参（地址传递）也不能修改原值，防止误修改
//{
//	//p->age = 18;//
//	cout << p->name << p->age << p->score << endl;
//}
//int main6()
//{
//
//	Student s = { "张三", 19, 100 };
//
//	PrintStudent(&s);
//	system("pause");
//	return 0;
//}
