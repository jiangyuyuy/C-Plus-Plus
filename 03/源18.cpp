//#include<iostream>
//#include<string>
//using namespace std;
//
///*
//动态多态
//1.要有继承关系
//2.子类重写父类的虚函数
//*/
//
//class Animal
//{
//public:
//	// 虚函数，地址晚绑定
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat :public Animal
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
//void Speak(Animal& animal)
//{
//	animal.speak();
//}
//
//int main()
//{
//	Cat cat;
//	Speak(cat);
//	Dog dog;
//	Speak(dog);
//	system("pause");
//	return 0;
//}