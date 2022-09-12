//#include <iostream>
//#include <string>
//#include <ctime>
//using namespace std;
//
//// 定义结构体
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//	struct student stuArr[5];
//};
//
//// 给老师和学生赋值的函数
//void allocateSpace(struct teacher tArr[], int len)
//{
//	string nameSeed = "ABCDE";
//	//给老师赋值
//	for (int i = 0; i < len; i++)
//	{
//		tArr[i].name = "Teacher_";
//		tArr[i].name += nameSeed[i];
//		// 给学生赋值
//		for (int j = 0; j < 5; j++)
//		{
//			tArr[i].stuArr[j].name = "Student_";
//			tArr[i].stuArr[j].name += nameSeed[i];
//
//			int random = rand() % 61 + 40;
//			tArr[i].stuArr[j].score = random;
//		}
//	}
//}
//// 打印老师信息的函数
//void printInfo(struct teacher tArr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老师姓名：" << tArr[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生的姓名：" << tArr[i].stuArr[j].name
//				 << " 考试分数为：" << tArr[i].stuArr[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	// 随机数种子
//	srand((unsigned int)time(NULL));
//
//	teacher tArr[3];
//	int len = sizeof(tArr) / sizeof(tArr[0]);
//	allocateSpace(tArr, len);
//	printInfo(tArr, len);
//	system("pause");
//	return 0;
//}