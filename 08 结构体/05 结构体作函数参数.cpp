//#include<iostream>
//using namespace std;
//#include<string>
//
//
//
//struct Student
//{
//	string name;
//	int age = 0;
//	int score = 0;
//};
//void PrintStudent1(struct Student s)
//{
//	s.age = 100;
//	cout << "值传递打印：" << s.name << s.age << s.score << endl;
//};
//
//void PrintStudent2(struct Student *p)
//{
//	p->age = 100;
//	cout << "地址传递打印：" << p->name << p->age << p->score << endl;
//}
//int main5()
//{
//	Student s;
//	s.name = "张三";
//	s.age = 19;
//	s.score = 100;
//
//	PrintStudent1(s);//值传递打印
//	//PrintStudent2(&s);//地址传递打印
//	cout << "main函数中打印：" << s.name << s.age << s.score << endl;
//
//	system("pause");
//	return 0;
//}
