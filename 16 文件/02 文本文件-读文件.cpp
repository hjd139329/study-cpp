//#include<iostream>
//using namespace std;
//#include<fstream>
//#include<string>
//void test01()
//{
//	//1、包含头文件
//
//	//2、创建流对象
//	ifstream ifs;
//
//	//3、指定打开方式
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件读取失败" << endl;
//		return;
//	}
//	//4、读取数据
//	//第一种
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第二种
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//	//第三种
//	string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}
//
//	//第四种
//	char c;
//	while ((c = ifs.get()!=EOF))//EOF end of file
//	{
//		cout << buf << endl;
//	}
//	//5、关闭文件
//	ifs.close();
//}
//int main2()
//{
//	test01();
//	system("pause");
//	return 0;
//}
