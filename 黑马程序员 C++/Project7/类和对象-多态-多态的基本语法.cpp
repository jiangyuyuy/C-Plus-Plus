//#include<iostream>
//#include<string>
//using namespace std;
//
///*
//��̬��Ϊ���֣�
//��̬��̬���������غ����������
//��̬��̬����������麯��ʵ��
//
//��̬��̬�Ͷ�̬��̬������
//��̬��̬�ĵ�ַ��� - ����׶�ȷ��������ַ
//��̬��̬�ĺ�����ַ��� - ���н׶�ȷ��������ַ
//*/
//
//class Animal
//{
//public:
//	//speak���������麯��
//	//����ǰ�����virtual�ؼ��֣�����麯������ô�������ڱ����ʱ��Ͳ���ȷ������������
//	virtual void speak()
//	{
//		cout << "������˵����" << endl;
//	}
//};
//
//class Cat:public Animal
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
////�����̬
////1.����̳й�ϵ
////2.������д������麯��
//
////��̬��̬��ʹ��
////�����ָ��������� ָ���������
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