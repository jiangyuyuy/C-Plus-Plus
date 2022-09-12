#include<iostream>
#include<string>
using namespace std;

//继承三种方式：公共继承，保护继承，私有继承

//公共继承
class BasePage
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son1 :public BasePage
{
public:
	void func()
	{
		m_a = 10;  //父类中的公共权限在子类中依然是公共权限
		m_b = 10;  //父类中的保护权限在子类中依然是保护权限
		//m_c = 10；  //父类中的私有权限子类拿不到
	}
};

void test01()
{
	son1 s1;
	s1.m_a = 100;
	//s1.m_b = 100;  保护权限类外不能访问
}

//保护继承
class son2 :protected BasePage
{
public:
	void func()
	{
		m_a = 100;  //父类中的公共权限在子类中变成了保护权限
		m_b = 100;  //父类中的保护权限在子类中依然是保护权限
		//m_c = 100;  //父类中的私有权限子类拿不到
	}
};

void test02()
{
	son2 s2;
	//s2.m_a = 100;  //保护权限类外不能访问
	//s2.m_b = 100;  //保护权限类外不能访问
	//s2.m_c = 100;  //私有权限不能访问
}

//私有继承
class son3 :private BasePage
{
public:
	void func()
	{
		m_a = 100;  //父类中的公共权限在子类中变成了私有权限
		m_b = 100;  //父类中的保护权限在子类中变成了私有权限
		//m_c = 100;  //父类中的私有权限子类拿不到
	}
};

void test02()
{
	son3 s3;
	//s3.m_a = 100;  //私有权限不能访问
	//s3.m_b = 100;  //私有权限不能访问
	//s3.m_c = 100;  //私有权限不能访问
}

class grandson :public son3
{
public:
	void func()
	{
		//m_a = 1000;  //m_a 在 son3 中已经是私有权限，不能继承
		//m_b = 1000;  //m_b 在 son3 中已经是私有权限，不能继承
	}
};

int main()
{
	test01();
	system("pause");
	return 0;
}