//#include<iostream>
//#include<string>
//using namespace std;
//
//class Calculator
//{
//public:
//	int getResult(string opera)
//	{
//		if (opera == "+")
//		{
//			return m_num1 + m_num2;
//		}
//		else if (opera == "-")
//		{
//			return m_num1 - m_num2;
//		}
//		else if (opera == "*")
//		{
//			return m_num1 * m_num2;
//		}
//		//����ʵ�����У�����չ���п��ţ����޸Ľ��йر�
//	}
//
//	int m_num1;
//	int m_num2;
//};
//	
//void test01()
//{
//	//��������������
//	Calculator c;
//	c.m_num1 = 10;
//	c.m_num2 = 15;
//
//	cout << c.m_num1 << " + " << c.m_num2 << " = " << c.getResult("+") << endl;
//	cout << c.m_num1 << " - " << c.m_num2 << " = " << c.getResult("-") << endl;
//	cout << c.m_num1 << " * " << c.m_num2 << " = " << c.getResult("*") << endl;
//}
//
////���ö�̬д��������
////ʵ�ּ������Ļ���
//class AbstractCalculator
//{
//public:
//
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int m_num1;
//	int m_num2;
//};
//
////�������ӷ���
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_num1 + m_num2;
//	}
//};
//
////������������
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_num1 - m_num2;
//	}
//};
//
////�������˷���
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_num1 * m_num2;
//	}
//};
//
//
//void test02()
//{
//	//��̬ʹ������
//	//����ָ���������ָ���������
//
//	//��̬�ô�
//	//1.��֯�ṹ����
//	//2.�ɶ���ǿ
//	//3.����ǰ�ںͺ�����չ�Լ�ά���Ը�
//
//	//�ӷ�����
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_num1 = 10;
//	abc->m_num2 = 15;
//
//	cout << abc->m_num1 << " + " << abc->m_num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//	//�˷�����
//	abc = new MulCalculator;
//	abc->m_num1 = 10;
//	abc->m_num2 = 15;
//
//	cout << abc->m_num1 << " * " << abc->m_num2 << " = " << abc->getResult() << endl;
//	delete abc;
//}
//		
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}