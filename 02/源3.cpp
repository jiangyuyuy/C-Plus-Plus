//#include<iostream>
//#include<string>
//using namespace std;
//
//typedef struct LNode* List;
//#define MAXSIZE 10
//
//// 线性表
//
//struct LNode {
//	int Last;
//	int Data[MAXSIZE];
//};
//
//List MakeEmpty() {
//	List PtrL;
//	PtrL = (List)malloc(sizeof(struct LNode));
//	PtrL->Last = -1;
//	return PtrL;
//}
//
//// 查找元素
//int Find(int X, List PtrL) {
//	int i = 0;
//	while (i <= PtrL->Last && PtrL->Data[i] != X) {
//		i++;
//	}
//	if (i > PtrL->Last) {
//		return -1;
//	}
//	else {
//		return i;
//	}
//}
//
//// 插入元素到线性表
//void insert(int X, int i, List PtrL) {
//	int j;
//	if (PtrL->Last == MAXSIZE - 1) {
//		cout << "表满了" << endl;
//		return;
//	}if (i<1 || i>PtrL->Last + 2) {
//		cout << "位置不合法" << endl;
//		return;
//	}
//	for (j = PtrL->Last; j = i - 1; j--) {
//		PtrL->Data[j + 1] = PtrL->Data[j];
//	}
//	PtrL->Data[i - 1] = X;
//	PtrL->Last++;
//	return;
//}
//
//// 删除
//void Delete(int i, List PtrL) {
//	int j;
//	if (i < 1 || i > PtrL->Last + 1) {
//		cout << ("不存在第%d个元素", i) << endl;
//	}
//	for (j = i; j <= PtrL->Last; j++) {
//		PtrL->Data[j - 1] = PtrL->Data[j];
//	}
//	PtrL->Last--;
//}
//
//int main()
//{
//
//	return 0;
//}