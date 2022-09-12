//#include<iostream>
//#include<string>
//using namespace std;
//
////纯虚函数和抽象类
//class AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boiling() = 0;
//
//	//冲泡
//	virtual void Brew() = 0;
//
//	//倒入杯中
//	virtual void PourInCup() = 0;
//
//	//加入辅料
//	virtual void PutSomething() = 0;
//
//	//制作饮品
//	void makeDrink()
//	{
//		Boiling();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
//class Coffee :public AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boiling()
//	{
//		cout << "煮水" << endl;
//	}
//
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	//加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加入辅料" << endl;
//	}
//};
//
//void doWork(AbstractDrinking* abs)
//{
//	abs->makeDrink();
//	delete abs;
//}
//
//void test01()
//{
//	doWork(new Coffee);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}