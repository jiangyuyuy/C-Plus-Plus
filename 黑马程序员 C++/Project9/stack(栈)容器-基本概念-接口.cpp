#include<iostream> 
#include<string> 
#include<stack> 
#include<algorithm> 
using namespace std;    

/*
栈容器： 
1.先进后出 FIFO
2.栈不允许遍历
3.栈可以判断是否为空 empty()
4.栈可以返回元素个数 size()

数据存取：
push(elem);  向栈顶添加元素
pop();  从栈顶删除第一个元素
top();  返回栈顶元素

大小操作
empty();  判断是否为空
size();  返回栈的大小
*/ 

void test01()
{
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);

	cout << "栈的大小: " << s.size() << endl;

	//只要栈不为空，查看栈顶，并且执行出栈操作
	while (!s.empty())
	{
		//查看栈顶元素
		cout << "栈顶元素为：" << s.top() << endl;

		//出栈
		s.pop();
	}

	cout << "栈的大小: " << s.size() << endl;
}

int main()  
{ 
	test01();
	system("pause"); 
	system("cls"); 
	return 0; 
} 
