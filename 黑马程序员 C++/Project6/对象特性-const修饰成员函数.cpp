//#include<iostream>
//#include<string>
//using namespace std;
//
////����������Ա�������const���Ϊ������
////�������ڲ��������γ�Ա����
////��Ա��������ʱ����ؼ���mutable���ڳ���������Ȼ�����޸�
//
//class Person
//{
//public:
//	void ShowPerson() const
//	{
//		//thisָ��ı��ʣ���ָ�볣����ָ���ָ���ǲ������޸ĵ�
//		// const Person * const this;
//		// this->m_a = 100;  �������޸�
//		this->m_b = 100;  //���� mutable �ؼ��ֺ󣬳�����ָ������޸�
//	}
//
//	void func() {}  //�ǳ�����
//
//	int m_a;
//	mutable int m_b;
//};
//
//void test01()
//{
//	Person p;
//	p.ShowPerson();
//}
//
//void test02()
//{
//	const Person p;  //�ڶ���ǰ��const����Ϊ������
//	//p.m_a = 100;  ���ܸ���
//	p.m_b = 100;
//	p.ShowPerson();
//
//	//p.func();  ������Ϊ������ֻ�ܵ��ó�������p Ϊ�����󣬶� func() Ϊ�ǳ�����
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}