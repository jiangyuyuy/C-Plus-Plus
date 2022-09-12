//#include<iostream>
//#include<string>
//using namespace std;
//
//class MyInteger
//{
//
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//重置前置递增运算符
//	MyInteger& operator++()
//	{
//		//先++
//		m_Num++;
//		//后返回
//		return *this;
//	}
//
//	MyInteger& operator--()
//	{
//		m_Num--;
//		return *this;
//	}
//
//	//后置递增
//	MyInteger operator++(int)  
//	//只能用 int 作为占位参数，后置递增返回值，不用加 &
//	{
//		//先记录自身结果
//		MyInteger tmp = *this;
//		//后递增
//		m_Num++;
//		//最后将结果返回
//		return tmp;
//
//	}
//
//private:
//	int m_Num;
//};
//
////重载 << 运算符
//ostream& operator<<(ostream& cout, MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//
//	cout << "myint: " << ++myint << endl;  //前置递增，先加一，后计算，1
//	cout << "myint: " << myint++ << endl;  //后置递增，先计算，后加一，1
//	cout << "myint: " << myint << endl;  //2
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}