#include<iostream>
#include<string>
using namespace std;

//�̳����ַ�ʽ�������̳У������̳У�˽�м̳�

//�����̳�
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
		m_a = 10;  //�����еĹ���Ȩ������������Ȼ�ǹ���Ȩ��
		m_b = 10;  //�����еı���Ȩ������������Ȼ�Ǳ���Ȩ��
		//m_c = 10��  //�����е�˽��Ȩ�������ò���
	}
};

void test01()
{
	son1 s1;
	s1.m_a = 100;
	//s1.m_b = 100;  ����Ȩ�����ⲻ�ܷ���
}

//�����̳�
class son2 :protected BasePage
{
public:
	void func()
	{
		m_a = 100;  //�����еĹ���Ȩ���������б���˱���Ȩ��
		m_b = 100;  //�����еı���Ȩ������������Ȼ�Ǳ���Ȩ��
		//m_c = 100;  //�����е�˽��Ȩ�������ò���
	}
};

void test02()
{
	son2 s2;
	//s2.m_a = 100;  //����Ȩ�����ⲻ�ܷ���
	//s2.m_b = 100;  //����Ȩ�����ⲻ�ܷ���
	//s2.m_c = 100;  //˽��Ȩ�޲��ܷ���
}

//˽�м̳�
class son3 :private BasePage
{
public:
	void func()
	{
		m_a = 100;  //�����еĹ���Ȩ���������б����˽��Ȩ��
		m_b = 100;  //�����еı���Ȩ���������б����˽��Ȩ��
		//m_c = 100;  //�����е�˽��Ȩ�������ò���
	}
};

void test02()
{
	son3 s3;
	//s3.m_a = 100;  //˽��Ȩ�޲��ܷ���
	//s3.m_b = 100;  //˽��Ȩ�޲��ܷ���
	//s3.m_c = 100;  //˽��Ȩ�޲��ܷ���
}

class grandson :public son3
{
public:
	void func()
	{
		//m_a = 1000;  //m_a �� son3 ���Ѿ���˽��Ȩ�ޣ����ܼ̳�
		//m_b = 1000;  //m_b �� son3 ���Ѿ���˽��Ȩ�ޣ����ܼ̳�
	}
};

int main()
{
	test01();
	system("pause");
	return 0;
}