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
//	//����ǰ�õ��������
//	MyInteger& operator++()
//	{
//		//��++
//		m_Num++;
//		//�󷵻�
//		return *this;
//	}
//
//	MyInteger& operator--()
//	{
//		m_Num--;
//		return *this;
//	}
//
//	//���õ���
//	MyInteger operator++(int)  
//	//ֻ���� int ��Ϊռλ���������õ�������ֵ�����ü� &
//	{
//		//�ȼ�¼������
//		MyInteger tmp = *this;
//		//�����
//		m_Num++;
//		//��󽫽������
//		return tmp;
//
//	}
//
//private:
//	int m_Num;
//};
//
////���� << �����
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
//	cout << "myint: " << ++myint << endl;  //ǰ�õ������ȼ�һ������㣬1
//	cout << "myint: " << myint++ << endl;  //���õ������ȼ��㣬���һ��1
//	cout << "myint: " << myint << endl;  //2
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}