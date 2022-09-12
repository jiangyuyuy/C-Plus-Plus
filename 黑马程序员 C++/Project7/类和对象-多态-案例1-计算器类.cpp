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
//		//在真实开发中，对扩展进行开放，对修改进行关闭
//	}
//
//	int m_num1;
//	int m_num2;
//};
//	
//void test01()
//{
//	//创建计算器对象
//	Calculator c;
//	c.m_num1 = 10;
//	c.m_num2 = 15;
//
//	cout << c.m_num1 << " + " << c.m_num2 << " = " << c.getResult("+") << endl;
//	cout << c.m_num1 << " - " << c.m_num2 << " = " << c.getResult("-") << endl;
//	cout << c.m_num1 << " * " << c.m_num2 << " = " << c.getResult("*") << endl;
//}
//
////利用多态写计算器类
////实现计算器的基类
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
////计算器加法类
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_num1 + m_num2;
//	}
//};
//
////计算器减法类
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_num1 - m_num2;
//	}
//};
//
////计算器乘法类
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
//	//多态使用条件
//	//父类指针或者引用指向子类对象
//
//	//多态好处
//	//1.组织结构清晰
//	//2.可读性强
//	//3.对于前期和后期扩展以及维护性高
//
//	//加法运算
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_num1 = 10;
//	abc->m_num2 = 15;
//
//	cout << abc->m_num1 << " + " << abc->m_num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//	//乘法运算
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