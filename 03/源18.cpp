//#include<iostream>
//#include<string>
//using namespace std;
//
///*
//��̬��̬
//1.Ҫ�м̳й�ϵ
//2.������д������麯��
//*/
//
//class Animal
//{
//public:
//	// �麯������ַ���
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "С����˵��" << endl;
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