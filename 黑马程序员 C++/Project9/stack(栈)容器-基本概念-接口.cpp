#include<iostream> 
#include<string> 
#include<stack> 
#include<algorithm> 
using namespace std;    

/*
ջ������ 
1.�Ƚ���� FIFO
2.ջ���������
3.ջ�����ж��Ƿ�Ϊ�� empty()
4.ջ���Է���Ԫ�ظ��� size()

���ݴ�ȡ��
push(elem);  ��ջ�����Ԫ��
pop();  ��ջ��ɾ����һ��Ԫ��
top();  ����ջ��Ԫ��

��С����
empty();  �ж��Ƿ�Ϊ��
size();  ����ջ�Ĵ�С
*/ 

void test01()
{
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);

	cout << "ջ�Ĵ�С: " << s.size() << endl;

	//ֻҪջ��Ϊ�գ��鿴ջ��������ִ�г�ջ����
	while (!s.empty())
	{
		//�鿴ջ��Ԫ��
		cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;

		//��ջ
		s.pop();
	}

	cout << "ջ�Ĵ�С: " << s.size() << endl;
}

int main()  
{ 
	test01();
	system("pause"); 
	system("cls"); 
	return 0; 
} 
