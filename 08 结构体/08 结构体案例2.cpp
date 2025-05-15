#include<iostream>
using namespace std;
#include<string>


//驼峰命名法：
//结构体首字母大写，后面单词首字母大写
//函数首字母小写，后面单词首字母大写


//设计一个英雄的结构体，包括成员姓名，年龄，性别;
//创建结构体数组，数组中存放5名英雄。
//设计通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，
//最终打印排序后的结果。

//英雄的结构体
struct Hero
{
	string name;
	int age = 0;
	int sex = 0;//如果sec为1，则为男，为0，则为女
};


//给hero赋值
void allocateHero(Hero h[], int len)
{
	string nameseed = "ABCDEF";
	for (int i = 0; i < len; i++)
	{
		//生成名字
		h[i].name = "hero_";
		h[i].name += nameseed[i];
		//生成年龄
		h[i].age = rand() % 20 + 30;//年龄都在30-49之间
		//确认随机性别
		h[i].sex = rand() % 2;
	}

}

//冒泡排序算法，通过hero的年龄进行升序排序
void bubbleSort(Hero h[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i ;j++)
		{
			if (h[j].age > h[j + 1].age)
			{
				//交换hero数组中的所有信息
				//可以直接交换，不同分别交换姓名，年龄和性别
				//直接交换
				struct Hero hero_temp = h[j];
				h[j] = h[j + 1];
				h[j + 1] = hero_temp;

				//分别交换，麻烦，用直接交换
				// //1.交换姓名
				//string name_temp = h[j].name;
				//h[j].name = h[j + 1].name;
				//h[j + 1].name = name_temp;
				////2.交换年龄
				//int age_temp = h[j].age;
				//h[j].age = h[j + 1].age;
				//h[j + 1].age = age_temp;
				////交换性别
				//int sex_temp = h[j].sex;
				//h[j].sex = h[j + 1].sex;
				//h[j + 1].sex = sex_temp;
			}
		}
	}
}

//打印算法
void printHero(Hero p[], int len)
{
	for (int i = 0; i < len; i++)
	{
		
		cout << p[i].name << "--" << "年龄：" << p[i].age;
		if (p[i].sex == 1)
		{
			cout << "--" << "性别男" << endl;
		}
		else
			cout << "--" << "性别女" << endl;
		cout << endl;
	}
}

int main()
{
	//随机数种子，用来生成年龄和性别序号
	srand((unsigned int)time(NULL));

	//英雄结构体数组，包含5个英雄
	struct Hero heroArray[5];
	int len = sizeof(heroArray) / sizeof(heroArray[0]);

	//函数对英雄结构体数组进行赋值
	allocateHero(heroArray, len);

	//冒泡算法函数进行排序
	bubbleSort(heroArray, len);


	//打印排序后的结果
	printHero(heroArray, len);
	system("pause");
	return 0;

}