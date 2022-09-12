//#include<iostream>
//#include<string>
//using namespace std;
//
//// 使用数组表示两个堆栈
//
//#define MAXSIZE 10
//struct DStack {
//	int Data[MAXSIZE];
//	int Top1;
//	int Top2;
//};
//
//void Push(struct DStack* PtrS, int item, int Tag) {
//	if (PtrS->Top2 - PtrS->Top1 == 1) {
//		cout << "栈堆满" << endl;
//		return;
//	}
//	if (Tag == 1) {  // 表示对第一个堆栈操作
//		PtrS->Data[++(PtrS->Top1)] = item;
//	}
//	else {
//		PtrS->Data[--(PtrS->Top1)] = item;
//	}
//}
//
//int Pop(struct DStack* PtrS, int Tag) {
//	if (Tag == 1) {
//		if (PtrS->Top1 == -1) {
//			cout << "栈堆1空" << endl; return NULL;
//		}
//		else {return PtrS->Data[(PtrS->Top1)--];}
//	}
//	else {
//		if (PtrS->Top2 == MAXSIZE) {
//			cout << "堆栈2空" << endl; return NULL;
//		}
//		else {return PtrS->Data[(PtrS->Top2)++];}
//	}
//}
//
//int main()
//{
//	DStack S;
//	S.Top1 = -1;
//	S.Top2 = MAXSIZE;
//	return 0;
//}