//#include<iostream>
//#include<string>
//using namespace std;
//
///*
//多态分为两种：
//静态多态：函数重载和运算符重载
//动态多态：派生类和虚函数实现
//
//静态多态和动态多态的区别：
//静态多态的地址早绑定 - 编译阶段确定函数地址
//动态多态的函数地址晚绑定 - 运行阶段确定函数地址
//*/
//
//class Animal
//{
//public:
//	//speak函数就是虚函数
//	//函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了
//	virtual void speak()
//	{
//		cout << "动物在说话：" << endl;
//	}
//};
//
//class Cat:public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//
////满足多态
////1.满足继承关系
////2.子类重写父类的虚函数
//
////动态多态的使用
////父类的指针或者引用 指向子类对象
//void doSpeak(Animal &animal)  //Animal &animal = cat
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}