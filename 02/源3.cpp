//#include<iostream>
//#include<string>
//using namespace std;
//
//typedef struct LNode* List;
//#define MAXSIZE 10
//
//// ���Ա�
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
//// ����Ԫ��
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
//// ����Ԫ�ص����Ա�
//void insert(int X, int i, List PtrL) {
//	int j;
//	if (PtrL->Last == MAXSIZE - 1) {
//		cout << "������" << endl;
//		return;
//	}if (i<1 || i>PtrL->Last + 2) {
//		cout << "λ�ò��Ϸ�" << endl;
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
//// ɾ��
//void Delete(int i, List PtrL) {
//	int j;
//	if (i < 1 || i > PtrL->Last + 1) {
//		cout << ("�����ڵ�%d��Ԫ��", i) << endl;
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