//#include<iostream>
//using namespace std;
//
//
////实现通用对数组排序
////从大到小，使用选择算法
////测试char和int数组
//
//
////交换模板
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
////排序模板
//template<typename T>
//void my_Sort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
////打印模板
//template<typename T>
//void printArray(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  " ;
//	}
//	cout << endl;
//}
//void test01()
//{
//	char charArr[] = "bcdefa";
//	int len1 = sizeof(charArr)/sizeof(charArr[0]);
//	my_Sort(charArr, len1);
//	printArray(charArr, len1);
//	int intArr[] = { 1,3,4,5,8,0 };
//	int len2 = sizeof(intArr)/sizeof(intArr[0]);
//	my_Sort(intArr, len2);
//	printArray(intArr, len2);
//}
//int main3()
//{
//	test01();
//	system("pause");
//	return 0;
//}