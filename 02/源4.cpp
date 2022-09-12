//#include<iostream>
//#include<string>
//#include<List>
//using namespace std;
//
//typedef struct LNode* List;
//#define MAXSIZE 10
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
//// ����
//// ���
//int Length(List PtrL) {
//	List p = PtrL;
//	int j = 0;
//	while (p) {
//		p = p->Next;
//		j++;
//	}
//	return j;
//}
//
//// ����Ų���
//List FindKth(int K, List PtrL) {
//	List p = PtrL;
//	int i = 1;
//	while (p != NULL && i < K) {
//		p = p->Next;
//		i++;
//	}
//	if (i == K) {
//		return p;
//	}
//	else {
//		return NULL;
//	}
//}
//
//// ��ֵ����
//List Find(int X, List PtrL) {
//	List p = PtrL;
//	while (p != NULL && p->Data != X) {
//		p = p->Next;
//	}
//	return p;
//}
//
//// ����
//List Insert(int X, int i, List PtrL) {
//	List p, s;
//	if (i == 1) {
//		s = (List)malloc(sizeof(struct LNode));
//		s->Data = X;
//		s->Next = PtrL;
//		return s;
//	}
//	p = FindKth(i - 1, PtrL);
//	if (p == NULL) {
//		cout << "��������!" << endl;
//		return NULL;
//	}
//	else {
//		s = (List)malloc(sizeof(struct LNode));
//		s->Data = X;
//		s->Next = p->Next;
//		p->Next = s;
//		return PtrL;
//	}
//}
//
//// ɾ������
//List Delete(int i, List PtrL) {
//	List p, s;
//	if (i == 1) {
//		s = PtrL;
//		if (PtrL != NULL) {
//			PtrL = PtrL->Next;
//		}
//		else {
//			return NULL;
//		}
//		free(s);
//		return PtrL;
//	}
//	p = FindKth(i - 1, PtrL);
//	if (p == NULL) {
//		cout << ("��%d���ڵ㲻����", i - 1) << endl;
//		return NULL;
//	}
//	else if (p->Next == NULL) {
//		cout << ("��%d���ڵ㲻����", i) << endl;
//	}
//	else {
//		s = p->Next;
//		p->Next = s->Next;
//		free(s);
//		return PtrL;
//	}
//}
//
//int main()
//{
//
//	return 0;
//}