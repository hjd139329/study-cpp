//#include<iostream>
//using namespace std;
//#include <string>
//#include<ctime>
//
////学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下：
//// 设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员，
//// 学生的成员有姓名、考试分数。
////创建数组存放3名老师，通过函数给每个老师及所带的学生赋值，最终打印出老师数据以及老师所带的学生数据。
//
//struct Student
//{
//	string name;
//	int score = 0;
//};
//struct Teacher
//{
//	string name;
//	Student stuArray[5];
//};
//
//
//
////给老师和学生赋值函数
//void allocateSpace(struct Teacher s[], int len)
//{
//
//
//	string nameseed = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		s[i].name = "老师_";
//		s[i].name += nameseed[i];
//		
//		//给每个老师带的学生赋值
//		for (int j = 0; j < 5; j++)
//		{
//			s[i].stuArray[j].name = "学生_";
//			s[i].stuArray[j].name += nameseed[j];
//			int random = rand() % 61 + 40;
//			s[i].stuArray[j].score = random;
//		}
//	}
//}
//
//
//
////函数打印老师和所带学生的数据
//void PrintData(Teacher s[])
//{
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "老师的姓名：" << s[i].name << endl;
//		cout << s[i].name << "的学生数据：" << endl;
//		for(int j = 0;j<5;j++)
//		{
//			cout << s[i].stuArray[j].name << "的分数: " << s[i].stuArray[j].score << endl;
//		}
//	}
//}
//
//
//int main()
//{
//	//创建包含3个老师的数组
//	Teacher teaArray[3];
//	int len = sizeof(teaArray) / sizeof(teaArray[0]);
//	//以下是手动赋值
//	////老师1
//	//teaArray[0].name = "老师1";
//	//teaArray[0].stuArray[0] = { "学生1：", 1 };
//	//teaArray[0].stuArray[1] = { "学生2：", 2 };
//	//teaArray[0].stuArray[2] = { "学生3：", 3 };
//	//teaArray[0].stuArray[3] = { "学生4：", 4 };
//	//teaArray[0].stuArray[4] = { "学生5：", 5 };
//	////老师2
//	//teaArray[1].name = "老师2";
//	//teaArray[1].stuArray[0] = { "学生6：", 6 };
//	//teaArray[1].stuArray[1] = { "学生7：", 7 };
//	//teaArray[1].stuArray[2] = { "学生8：", 8 };
//	//teaArray[1].stuArray[3] = { "学生9：", 9 };
//	//teaArray[1].stuArray[4] = { "学生10：", 10 };
//	////老师3
//	//teaArray[2].name = "老师3";
//	//teaArray[2].stuArray[0] = { "学生11：", 11 };
//	//teaArray[2].stuArray[1] = { "学生12：", 12};
//	//teaArray[2].stuArray[2] = { "学生13：", 13};
//	//teaArray[2].stuArray[3] = { "学生14：", 14};
//	//teaArray[2].stuArray[4] = { "学生15：", 15};
//
//
//	//使用函数赋值
//	//随机数种子
//	srand((unsigned int)time(NULL));
//	//srand((unsigned int)time(NULL));
//	allocateSpace(teaArray, len);
//	PrintData(teaArray);
//
//	system("pause");
//	return 0;
//}
//
