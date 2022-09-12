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
//// 链表
//// 求表长
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
//// 按序号查找
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
//// 按值查找
//List Find(int X, List PtrL) {
//	List p = PtrL;
//	while (p != NULL && p->Data != X) {
//		p = p->Next;
//	}
//	return p;
//}
//
//// 插入
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
//		cout << "参数错误!" << endl;
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
//// 删除操作
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
//		cout << ("第%d个节点不存在", i - 1) << endl;
//		return NULL;
//	}
//	else if (p->Next == NULL) {
//		cout << ("第%d个节点不存在", i) << endl;
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