//#include <iostream>
//#include <string>
//#include <ctime>
//using namespace std;
//
//// ����ṹ��
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
//// ����ʦ��ѧ����ֵ�ĺ���
//void allocateSpace(struct teacher tArr[], int len)
//{
//	string nameSeed = "ABCDE";
//	//����ʦ��ֵ
//	for (int i = 0; i < len; i++)
//	{
//		tArr[i].name = "Teacher_";
//		tArr[i].name += nameSeed[i];
//		// ��ѧ����ֵ
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
//// ��ӡ��ʦ��Ϣ�ĺ���
//void printInfo(struct teacher tArr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "��ʦ������" << tArr[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\tѧ����������" << tArr[i].stuArr[j].name
//				 << " ���Է���Ϊ��" << tArr[i].stuArr[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	// ���������
//	srand((unsigned int)time(NULL));
//
//	teacher tArr[3];
//	int len = sizeof(tArr) / sizeof(tArr[0]);
//	allocateSpace(tArr, len);
//	printInfo(tArr, len);
//	system("pause");
//	return 0;
//}