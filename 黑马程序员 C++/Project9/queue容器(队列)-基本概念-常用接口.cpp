#include<iostream>
#include<queue>
#include<string>
using namespace std;

//����

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};
void test01()
{
	queue<Person>q;

	//׼������
	Person p1("��ɮ", 30);
	Person p2("�����", 1000);
	Person p3("��˽�", 500);
	Person p4("ɳ��", 400);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "���д�С��" << q.size() << endl;

	//�жϣ�ֻҪ���в�Ϊ�գ��鿴��ͷ�Ͷ�β
	while (!q.empty())
	{
		cout << "��ͷԪ�� - ������" << q.front().m_name << " ���䣺" << q.front().m_age << endl;
		cout << "��βԪ�� - ������" << q.back().m_name << " ���䣺" << q.back().m_age << endl;

		//����
		q.pop();
	}

	cout << "���д�С��" << q.size() << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
