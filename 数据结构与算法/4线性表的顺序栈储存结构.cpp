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
//typedef struct sqStack {
//	int* base;  // 栈底指针
//	int* top;  // 栈顶指针
//	int stacksize;  // 栈最大容量
//	sqStack() {}
//}SqStack;
//
//// 初始化空栈
//int InitStack(SqStack& S) {
//	S.base = new int[MAXSIZE];
//	// s.base = (int*)malloc(MAXSIZE*sizeof(int));
//	if (!S.base) {
//		exit(OVERFLOW);
//	}
//	S.top = S.base;
//	S.stacksize = MAXSIZE;
//	return OK;
//}
//
//// 判断顺序栈是否为空
//bool IsEmptyStack(SqStack& S) {
//	if (S.top == S.base) {
//		return TRUE;
//	}
//	else {
//		return FALSE;
//	}
//}
//
//// 求顺序栈长度
//int LengthStack(SqStack& S) {
//	return S.top - S.base;  // 可以用指针地址相减得到元素个数
//}
//
//// 清空栈
//int ClearStack(SqStack& S) {
//	if (S.base) {
//		S.top = S.base;
//		return OK;
//	}
//	return ERROR;
//}
//
//// 销毁顺序栈
//int DestroyStack(SqStack& S) {
//	if (S.base) {
//		delete S.base;
//		S.stacksize = 0;
//		S.base = S.top = NULL;
//		return OK;
//	}
//	return ERROR;
//}
//
//// 顺序栈的入栈
//int Push(SqStack& S, int e) {
//	if (S.top - S.base == S.stacksize) {  // 栈已满
//		return ERROR;
//	}
//	*S.top = e;
//	S.top++;
//	return OK;
//}
//
//// 顺序栈的出栈
//int Pop(SqStack& S) {
//	if (S.top - S.base == 0) {
//		return ERROR;
//	}
//	S.top--;
//	int e = *S.top;
//	return e;  // 返回弹出的数据
//}
//
//int main() {
//	SqStack S;
//	InitStack(S);
//	int length = LengthStack(S);
//	cout << " length: " << length << endl;
//	cout << "入栈..." << endl;
//	for (int i = 1; i <= 5; i++) {
//		Push(S, i);
//		int length = LengthStack(S);
//		cout << " length: " << length << endl;
//	}
//	cout << "弹栈..." << endl;
//	for (int i = 1; i <= 5; i++) {
//		Pop(S);
//		int length = LengthStack(S);
//		cout << " length: " << length << endl;
//	}
//	system("pause");
//	return 0;
//}