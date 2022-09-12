#include<iostream>
#include<queue>
#include<string>
using namespace std;

//队列

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

	//准备数据
	Person p1("唐僧", 30);
	Person p2("孙悟空", 1000);
	Person p3("猪八戒", 500);
	Person p4("沙悟净", 400);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "队列大小：" << q.size() << endl;

	//判断，只要队列不为空，查看队头和队尾
	while (!q.empty())
	{
		cout << "队头元素 - 姓名：" << q.front().m_name << " 年龄：" << q.front().m_age << endl;
		cout << "队尾元素 - 姓名：" << q.back().m_name << " 年龄：" << q.back().m_age << endl;

		//出队
		q.pop();
	}

	cout << "队列大小：" << q.size() << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
