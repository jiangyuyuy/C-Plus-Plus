//#include<iostream>
//#include<string>
//using namespace std;
//
//class Calculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_num1 + m_num2;
//		}
//		if (oper == "-")
//		{
//			return m_num1 - m_num2;
//		}
//	}
//	int m_num1;
//	int m_num2;
//};
//
//// ʹ�ö�̬д������
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//	int m_num1;
//	int m_num2;
//};
//
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_num1 + m_num2;
//	}
//};
//
//
//class Base
//{
//public:
//	virtual void func() = 0;  // ���麯��
//};
//
//class Son :public Base
//{
//public:
//	virtual void func()  // ����д���麯���ᱨ��
//	{
//		cout << "������д����Ĵ��麯��" << endl;
//	}
//};
//
//int main()
//{
//	Calculator cal;
//	cal.m_num1 = 10;
//	cal.m_num2 = 20;
//	cout << cal.getResult("+") << endl;
//
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_num1 = 10;
//	abc->m_num2 = 20;
//	cout << abc->m_num1 << " + " << abc->m_num2 << " = " << abc->getResult() << endl;
//
//	Base* son = new Son;
//	son->func();
//
//	system("pause");
//	return 0;
//}