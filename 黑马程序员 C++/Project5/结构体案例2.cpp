//#include <iostream>
//#include <string>
//
//using namespace std;
//
////1.���Ӣ�۽ṹ��
//struct Hero
//{
//	string name;
//	int age;
//	string sex;
//};
////��������������׵�ַ�����������˺����������ǵ�ַ����
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
//	//2.����������5��Ӣ��
//	struct Hero heroArray[5] =
//	{
//		{"liubei",23,"nan"},
//		{"guanyu",22,"nan"},
//		{"zhangfei",20,"nan"},
//		{"zhaoyun",21,"nan"},
//		{"diaochan",19,"nv"},
//	};
//	cout << "����ǰ��" << endl;
//	int len = sizeof(heroArray) / sizeof(heroArray[0]);
//	printArray(heroArray, len);
//	//3.������������򣬰������������������
//	bubbleSort(heroArray, len);
//	//4.�����������д�ӡ���
//	cout << "�����" << endl;
//	printArray(heroArray, len);
//	system("pause");
//	return 0;
//}