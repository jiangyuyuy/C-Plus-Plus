//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int m_a, int m_b)
//	{
//		this->m_a = m_a;
//		this->m_b = m_b;
//	}
//	void setPerson() const  //������
//		// thisָ�뱾����ָ�볣����ָ�򲻿��Ը��ģ��൱�� Person * const this;
//	{
//		// void showPerson() const{} �൱�� const Person * const this; ָ���ָ���ֵ���������޸�
//		// ��Ҫ�޸ģ���Ҫ�� mutable �ؼ���
//		// m_a = 10;  // ��ͬ�� this->m_a;
//		m_b = 20;
//	}
//	void func1() {}
//	void func2() const { cout << "������func2()����" << endl; }
//	int m_a;
//	mutable int m_b;
//};
//
//int main()
//{
//	Person p(100, 200);
//	cout << "m_a: " << p.m_a << ", " << "m_b: " << p.m_b << endl;
//
//	p.setPerson();
//	cout << "m_a: " << p.m_a << ", " << "m_b: " << p.m_b << endl;
//
//	// ������
//	const Person p1(1, 2);
//	// p1.m_a = 3;  // ���������Բ������޸�
//	p1.m_b = 4;  // ����mutable�ؼ��ֿ����޸�
//	// p1.func1();  //������ֻ�ܵ��ó�����
//	p1.func2();
//	
//
//	system("pause");
//	return 0;
//}