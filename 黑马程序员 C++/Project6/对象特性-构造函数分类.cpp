//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	Person()  //���캯���Ĵ���
//	{
//		cout << "���캯���ĵ���..." << endl;
//	}
//
//	Person(int a)  //�вι��캯���Ĵ���
//	{
//		age = a;
//		cout << "�вι��캯���ĵ���..." << endl;
//	}
//
//	Person(const Person& p)  //�������캯��
//	{
//		age = p.age;
//		cout << "�������캯���ĵ���..." << endl;
//		cout << "age:" << age << endl;
//	}
//	int age;
//};
//
//void test01()
//{
//	//1.���ŷ�
//	Person p1;  //Ĭ�Ϲ��캯�����ü�����
//	Person p2(10);
//	Person p3(p2);
//
//	//2.��ʾ��
//	Person p4; 
//	Person p5 = Person(100);  //�Ⱥ��Ҳ� Person(100) �����ó������������󣬵�����ִ����ͱ��ͷ�
//	Person p6 = Person(p5);
//
//	Person(1000);
//	cout << "�����������ͷ���..." << endl;
//
//	//3.��ʽת����
//	Person p7 = 5; //�൱��Person p7 = Person(5)
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}