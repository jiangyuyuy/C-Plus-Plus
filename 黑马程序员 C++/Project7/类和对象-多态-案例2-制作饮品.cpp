//#include<iostream>
//#include<string>
//using namespace std;
//
////���麯���ͳ�����
//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boiling() = 0;
//
//	//����
//	virtual void Brew() = 0;
//
//	//���뱭��
//	virtual void PourInCup() = 0;
//
//	//���븨��
//	virtual void PutSomething() = 0;
//
//	//������Ʒ
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
//	//��ˮ
//	virtual void Boiling()
//	{
//		cout << "��ˮ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "���븨��" << endl;
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