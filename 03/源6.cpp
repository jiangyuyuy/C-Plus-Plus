//#include<iostream>
//#include<string>
//using namespace std;
//
//class C1
//{
//	int age = 90; //��Ĭ��Ȩ��Ϊ˽��Ȩ��
//};
//
//struct C2
//{
//	int age = 90;  //�ṹ��Ĭ��Ϊ����Ȩ��
//};
//
//class Person
//{
//public:  // ��Ա���ں����ⶼ���Է���
//	string m_name;
//private:  //����Ȩ�ޣ���Ա���ڿ��Է��ʣ����ⲻ���Է��ʣ����Ӳ����Է��ʸ����еı�������
//	string m_car;
//protected:  //˽��Ȩ�ޣ���Ա���ڿ��Է��ʣ����ⲻ���Է��ʣ����ӿ��Է��ʸ����еı�������
//	int m_password;
//
//public:
//	void func()
//	{
//		m_name = "����";
//		m_car = "����";
//		m_password = 123;
//	}
//};
//
//int main()
//{
//	Person p;
//	p.func();  //��ֵ
//	cout << "name: " << p.m_name << endl;
//	// cout << p.m_car << endl;  ���ⲻ���Է���
//	// cout << p.password << endl;  ���ⲻ���Է���
//
//	C1 c1;
//	//c1.age;  ���ⲻ���Է���
//	C2 c2;
//	cout << c2.age << endl;  //������Է���
//	system("pause");
//	return 0;
//}