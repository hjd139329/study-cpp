//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//1.float单精度
//	//2.double双精度
//	//默认显示6位有效数字
//
//	float f1 = 3.1415926f;//加f是应为编译器默认为double类型，加f用于识别
//	double d1 = 3.1415926;
//
//
//	cout << f1 << endl;
//	cout << d1 << endl;
//
//	//统计两种实型所占内存大小
//	cout << "float所占内存大小：" << sizeof(f1) << endl;//4字节
//	cout << "double所占内存大小：" << sizeof(d1) << endl;//8字节
//
//	//科学计数法
//	float f2 = 3e2;//e后面正数，表示3*10的2次幂
//	double d2 = 3e-2;//e后面附属，表示3*0.1的2次幂
//	cout << f2 << endl;
//	cout << d2 << endl;
//
//	system("pause");
//	return 0;
//
//
//}