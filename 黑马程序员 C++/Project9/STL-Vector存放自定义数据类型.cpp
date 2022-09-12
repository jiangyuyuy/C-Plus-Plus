#include<iostream>
#include<string>
#include<vector>

#include<algorithm>  //标准算法的头文件

using namespace std;

//vector容器中存放自定义数据类型
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
	//创建一个vector容器数组
	vector<Person> v;

	Person p1("aaa", 10);
	Person p2("bbb", 20);

	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);

	//遍历容器中的数据，it 表示指针，地址，*it 表示解引用
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名： " << (*it).m_name << ", 年龄： " << (*it).m_age << endl;
		cout << "姓名： " << it->m_name << ", 年龄： " << it->m_age << endl;
	}
}

void test02()
{
	//创建一个vector容器数组，Person* 为存放元素的地址
	vector<Person*> v1;

	Person p1("aaa", 10);
	Person p2("bbb", 20);

	//向容器中添加数据
	v1.push_back(&p1);
	v1.push_back(&p2);

	//遍历容器中的数据, *it 表示指针，地址
	for (vector<Person*>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << "::姓名： " << (*it)->m_name << ", 年龄： " << (*it)->m_age << endl;
		cout << "::姓名： " <<  (*(*it)).m_name << ", 年龄： " << (*(*it)).m_age << endl;
	}
}

int main()
{
	test01();
	test02();
	system("pause");
	system("cls");
	return 0;
}