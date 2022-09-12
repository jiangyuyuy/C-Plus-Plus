//#include<iostream>
//using namespace std;
//
//#define TRUE 1
//#define FALSE 0
//#define OK 1
//#define ERROR 0
//#define INFEASIBLE -1
//#define OVERFLOW -2
//#define MAXSIZE 100
//
//typedef struct stackNode {
//	int data;
//	struct stackNode* next;
//	stackNode() {}
//}StackNode, * LinkStack;
//
//// 链栈初始化
//int InitStack(LinkStack& S) {
//	S = NULL;  // 构造一个空栈，栈顶指针置为空
//	return OK;
//}
//
//// 判断链栈是否为空
//int IsEmptyStack(LinkStack& S) {
//	if (S == NULL) {
//		return TRUE;
//	}
//	else {
//		return FALSE;
//	}
//}
//
//// 链栈的入栈
//int Push(LinkStack& S, int e) {
//	StackNode* p = new StackNode;
//	p->data = e;
//	p->next = S;
//	S = p;
//	return OK;
//}
//
//// 链表的出栈
//int Pop(LinkStack& S) {
//	if (S == NULL) {
//		return ERROR;
//	}
//	int e = S->data;
//	StackNode* p;
//	p = S;
//	S = S->next;
//	delete p;
//	return e;
//}
//
//// 取栈顶元素
//int GetStackTopElem(LinkStack& S) {
//	if (S != NULL) {
//		return S->data;
//	}
//}
//
//int main() {
//	LinkStack S;
//	InitStack(S);
//	int IsEmpty = IsEmptyStack(S);
//	cout << "IsEmpty: " << IsEmpty << endl;
//	Push(S, 1);
//	int topElem = GetStackTopElem(S);
//	cout << "topElem: " << topElem << endl;
//	int IsEmpty1 = IsEmptyStack(S);
//	cout << "IsEmpty: " << IsEmpty1 << endl;
//	Pop(S);
//	int IsEmpty2 = IsEmptyStack(S);
//	cout << "IsEmpty: " << IsEmpty2 << endl;
//	Push(S, 2);
//	int topElem1 = GetStackTopElem(S);
//	cout << "topElem: " << topElem1 << endl;
//	return 0;
//}
//	vector<int>res = InOrderTraverse(&a);
//	for (int i = 0; i < res.size(); i++) {
//		cout << res[i] << " ";
//	}
//	cout << endl;
//	levelOrder(&a);
//	system("pause");
//	return 0;
//}