//#include<iostream>
//#include<string>
//using namespace std;
//
////thisָ��ָ�� �����õĳ�Ա���������� ����
////thisָ��������ÿһ���Ǿ�̬�ĳ�Ա�����ڵ�һ��ָ��
////this����Ҫ���壬ֱ��ʹ�ü���
//
////thisָ�����;��
////1.���βκͳ�Ա����ͬ��ʱ������ʹ��thisָ��������
////2.����ķǾ�̬��Ա�����з��ض���������ʹ�� return *this
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;
//	}
//
//	Person & PersonAddage(Person& p)  //�����õķ�ʽ���أ����ᴴ��һ���¶���
//	{
//		this->age += p.age;
//
//		//this ָ�� p2 ��ָ�룬*this ָ�� p2 �ı���
//		return *this;
//	}
//
//	int age;
//};
//
//void test1()
//{
//	Person p1(18);
//	cout << "p1.age: " << p1.age << endl;
//}
//
//void test2()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	p2.PersonAddage(p1);
//
//	cout << "p2.age: " << p2.age << endl;
//
//	p2.PersonAddage(p1).PersonAddage(p1);  //��ʽ���˼��
//
//	cout << "p2.age: " << p2.age << endl;
//}
//
//int main()
//{
//	test1();  //18
//	test2();  //20  40
//	system("pause");
//	return 0;
//}