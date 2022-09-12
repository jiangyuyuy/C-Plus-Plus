//#include<iostream>
//#include<string>
//using namespace std;
//
//class Base
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//
////公共继承
//class son :public Base
//{
//public:
//	int m_d;
//};
//
//void test01()
//{
//	//父类中所有非静态成员属性都会被子类继承下去
//	//父类中的私有属性是被编译器给隐藏了，因此访问不到，但是确实被继承下去了
//	cout << "size of son: " << sizeof(son) << endl;  //16
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}