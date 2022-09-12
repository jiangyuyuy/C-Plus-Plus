//#include<iostream>
//#include<string>
//using namespace std;
//
//#define MAXSIZE 10
//typedef struct SNode* Stack;
//struct SNode {
//	int Data[MAXSIZE];
//	int Top;
//};
//
//// 入栈
//void Push(Stack PtrS, int item) {
//	if (PtrS->Top == MAXSIZE - 1) {
//		cout << "栈已经满了" << endl;
//		return;
//	}
//	else {
//		PtrS->Data[++(PtrS->Top)] = item;
//		return;
//	}
//}
//
//// 出栈
//int Pop(Stack PtrS) {
//	if (PtrS->Top == -1) {
//		cout << "堆栈空" << endl;
//		return;
//	}
//	else {
//		return PtrS->Data[(PtrS->Top)--];
//	}
//}
//
//int main()
//{
//
//	return 0;
//}