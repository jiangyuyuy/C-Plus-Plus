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
//// ��ջ��ʼ��
//int InitStack(LinkStack& S) {
//	S = NULL;  // ����һ����ջ��ջ��ָ����Ϊ��
//	return OK;
//}
//
//// �ж���ջ�Ƿ�Ϊ��
//int IsEmptyStack(LinkStack& S) {
//	if (S == NULL) {
//		return TRUE;
//	}
//	else {
//		return FALSE;
//	}
//}
//
//// ��ջ����ջ
//int Push(LinkStack& S, int e) {
//	StackNode* p = new StackNode;
//	p->data = e;
//	p->next = S;
//	S = p;
//	return OK;
//}
//
//// ����ĳ�ջ
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
//// ȡջ��Ԫ��
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
