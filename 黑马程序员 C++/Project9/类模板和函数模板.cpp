#include<iostream>
#include<string>
using namespace std;

//��ģ��ͺ���ģ�������
template<class NameType, class AgeType = int>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name: " << this->m_Name <<
			" age: " << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};
//1.��ģ��û���Զ������Ƶ�����
void test01()
{
	//Person p("�����", 1000); //�޷��Զ��Ƶ���������
	Person<string, int>p("�����", 1000);
	
	p.showPerson();
}

//2.��ģ����ģ������б��п�����Ĭ�ϲ���
void test02()
{
	Person<string>p("��˽�", 300);
	p.showPerson();
}

int main()
{
	test01();
	test02();
	system("pause");
	system("cls");
	return 0;
}