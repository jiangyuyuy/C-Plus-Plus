//#include<iostream>
//#include<string>
//using namespace std;
//
////�������ʹ�����
//
////��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
////�����ʽ���������е�����������Ϊ���������ߴ�������
////
////�鹹�ʹ������Ĺ��ԣ�
//// �����Խ������ָ���ͷ��������
//// ����Ҫ�о���ĺ���ʵ��
//// 
////�鹹�ʹ�����������
//// ������鹹�������������ڳ����࣬�޷�ʵ��������
//// 
////�鹹�﷨��
//// virtual ~����(){};
//
////��������
//// virtual ~����() = 0;
//// ����::~����(){};
//
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal �Ĺ��캯������ " << endl;
//	}
//
//	////���� ������ ���Խ������ָ���ͷ��������ʱ���ɾ�������
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal ���������������� " << endl;
//	//}
//
//	//��������
//	virtual ~Animal() = 0;
//
//	//���麯��
//	virtual void Speak() = 0;
//};
//
////���� �������� Ҳ���Խ������ָ���ͷ��������ʱ���ɾ�������
//Animal::~Animal()
//{
//	cout << "Animal �������������ĵ���" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat �Ĺ��캯������ " << endl;
//		m_name = new string(name);
//		// m_name ���ص���һ����ַ
//	}
//
//	virtual void Speak()
//	{
//		cout << *m_name <<  "Сè��˵��..." << endl;
//	}
//
//	~Cat()
//	{
//		if (m_name != NULL)
//		{
//			cout << "Cat ���������ĵ���" << endl;
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
//	//����ָ��������ʱ���ʱ�򣬲�����������е���������������������������ж������ԣ������ڴ�й©
//	delete animal;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}