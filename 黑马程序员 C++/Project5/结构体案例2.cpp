//#include <iostream>
//#include <string>
//
//using namespace std;
//
////1.设计英雄结构体
//struct Hero
//{
//	string name;
//	int age;
//	string sex;
//};
////数组名是数组的首地址，数组名做了函数参数就是地址传递
//void bubbleSort(struct Hero heroArray[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			if (heroArray[j].age > heroArray[j + 1].age)
//			{
//				struct Hero temp = heroArray[j];
//				heroArray[j] = heroArray[j + 1];
//				heroArray[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void printArray(struct Hero heroArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "name: " << heroArray[i].name 
//		     << " age: " << heroArray[i].age 
//		     << " sex: " << heroArray[i].sex 
//		     << endl;
//	}
//}
//int main()
//{
//	//2.创建数组存放5名英雄
//	struct Hero heroArray[5] =
//	{
//		{"liubei",23,"nan"},
//		{"guanyu",22,"nan"},
//		{"zhangfei",20,"nan"},
//		{"zhaoyun",21,"nan"},
//		{"diaochan",19,"nv"},
//	};
//	cout << "排序前：" << endl;
//	int len = sizeof(heroArray) / sizeof(heroArray[0]);
//	printArray(heroArray, len);
//	//3.对数组进行排序，按照年龄进行升序排列
//	bubbleSort(heroArray, len);
//	//4.将排序结果进行打印输出
//	cout << "排序后：" << endl;
//	printArray(heroArray, len);
//	system("pause");
//	return 0;
//}