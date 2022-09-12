//#include<iostream>
//#include<string>
//using namespace std;
//
////虚析构和纯析构
//
////多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
////解决方式：将父类中的析构函数改为虚析构或者纯虚析构
////
////虚构和纯析构的共性：
//// 都可以解决父类指针释放子类对象
//// 都需要有具体的函数实现
//// 
////虚构和纯虚析构区别：
//// 如果是虚构函数，该类属于抽象类，无法实例化对象
//// 
////虚构语法：
//// virtual ~类名(){};
//
////纯虚析构
//// virtual ~类名() = 0;
//// 类名::~类名(){};
//
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal 的构造函数调用 " << endl;
//	}
//
//	////利用 虚析构 可以解决父类指针释放子类对象时不干净的问题
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal 的虚析构函数调用 " << endl;
//	//}
//
//	//纯虚析构
//	virtual ~Animal() = 0;
//
//	//纯虚函数
//	virtual void Speak() = 0;
//};
//
////利用 纯虚析构 也可以解决父类指针释放子类对象时不干净的问题
//Animal::~Animal()
//{
//	cout << "Animal 纯虚析构函数的调用" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat 的构造函数调用 " << endl;
//		m_name = new string(name);
//		// m_name 返回的是一个地址
//	}
//
//	virtual void Speak()
//	{
//		cout << *m_name <<  "小猫在说话..." << endl;
//	}
//
//	~Cat()
//	{
//		if (m_name != NULL)
//		{
//			cout << "Cat 析构函数的调用" << endl;
//			delete m_name;
//			m_name = NULL;
//		}
//	}
//	string *m_name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->Speak();
//
//	//父类指针在析构时候的时候，不会调用子类中的析构函数，导致子类如果发生有堆区属性，出现内存泄漏
//	delete animal;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}