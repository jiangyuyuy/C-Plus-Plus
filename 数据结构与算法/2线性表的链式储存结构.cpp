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
//typedef int Status;
//
////typedef struct ListNode {  // ��������
////	int data;
////	struct Listnode* next;
////}Lnode, *LinkList;  // LinkListΪָ��ṹ��Lnode��ָ������
//// �������� LinkList L; L��ʾͷָ�룬Ҳ���Խ�����L
//// ����ڵ� Lnode *p;
////p = L;  // p ָ��ͷ�ڵ�
////s = L->next;  // s ָ����Ԫ�ڵ�
////p = p->next;  // p ָ����һ�ڵ�
//
////struct ListNode {  // ����
////	int data;
////	ListNode* next;  // �洢��һ���ڵ��ַ��ָ����
////};
//
//typedef struct Student {
//	char num[8];  // ������
//	char name[8];  // ������
//	int score;  // ������
//}stu;
//
//typedef struct Lnode {
//	// stu data;
//	int data;
//	struct Lnode* next;  // ָ����
//}Lnode, *LinkList;
//
//// 1.�������ʼ��������һ���ձ�
//Status InitList(LinkList& L) {
//	L = new Lnode;
//	L->next = NULL;
//	return OK;
//}
//
//// 2.�ж������Ƿ�Ϊ�գ�ͷ�ڵ�ָ�����Ƿ�Ϊ�գ�
//Status ListIsEmpty(LinkList& L) {
//	if (L->next) {
//		return FALSE;
//	}
//	else {
//		return TRUE;
//	}
//}
//
//// 3.����������٣���ͷ��㿪ʼ�������ͷ����нڵ�
//Status DestroyList(LinkList& L) {
//	Lnode* p;  // pָ��ǰҪ���ٵĽڵ�
//	while (L) {
//		p = L;
//		L = L->next;
//		delete p;
//	}
//	return OK;
//}
//
//// 4.��յ�����ͷָ���ͷ�ڵ㻹����
//Status ClearList(LinkList& L) {
//	// �����ͷ����нڵ㣬����ͷ�ڵ�ָ��������Ϊ��
//	Lnode* p, * q;
//	p = L->next;
//	while (p) {
//		q = p->next;
//		delete p;
//		p = q;
//	}
//	L->next = NULL;
//	return OK;
//}
//
//// 5.�������
//Status LengthList(LinkList& L) {
//	Lnode* p;
//	p = L->next; 
//	int lengthList = 0;
//	while (p) {
//		lengthList++;
//		p = p->next;
//	}
//	return lengthList;
//}
//
//// 6.ȡ������� i ��Ԫ��
//Status GetIndexElem(LinkList& L, int i) {
//	// ��ȡ����� i ��λ��Ԫ�أ���ͨ������ e ����ֵ
//	Lnode* p;
//	p = L->next;
//	int j = 1;
//	while (p && j < i) {
//		p = p->next;
//		j++;
//	}
//	if (!p || j > i) {  // ��i��Ԫ�ز�����
//		return ERROR;
//	}
//	int e = p->data;
//	return e;
//}
//
//// 7.��ֵ��������
//Lnode* GetValueElem(LinkList& L, int e) {
//	// ��ֵ���Ҳ����ظ�ֵ�ĵ�ַ
//	Lnode* p = L->next;
//	while (p && p->data != e) {
//		p = p->next;
//	}
//	return p;
//}
//
//Status _GetValueElem(LinkList& L, int e) {
//	// ��ֵ���Ҳ����ظ�ֵ��λ������
//	Lnode* p = L->next;
//	int valueIndex = 1;
//	while (p && p->data != e) {
//		p = p->next;
//		valueIndex++;
//	}
//	if (p) {
//		return valueIndex;
//	}
//	else {
//		return ERROR;
//	}
//}
//
//// 8.����Ԫ�أ��ڵ㣩
//Status InsertElem(LinkList& L, int e, int i) {
//	Lnode* p = L;
//	int j = 0;
//	while (p && i - 1 > j) {
//		p = p->next;
//		j++;
//	}
//	if (!p || j > i - 1) {
//		return ERROR;  // ����λ�÷Ƿ�
//	}
//	Lnode*s = new Lnode;
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return OK;
//}
//
//// 9.��λ������ɾ���ڵ�
//Status DeleteIndexElem(LinkList& L, int i, int& e) {
//	Lnode* p = L;
//	int j = 0;
//	while (p->next && j < i - 1) {
//		p = p->next;
//		j++;
//	}
//	if (!(p->next) || j > i - 1) {  // ɾ��λ�ò�����(1=0����ɾ���ڵ㲻����)
//		return ERROR;
//	}
//	Lnode* q = p->next;
//	p->next = q->next;
//	e = q->data;  // ����ɾ���ڵ����������
//	delete q;  // �ͷ�ɾ���ڵ�Ŀռ�
//	return OK;
//}
//
//int main() {
//	LinkList L;
//	InitList(L);
//	int lengthList = LengthList(L);
//	cout << "lengthList: " << lengthList << endl;
//	for (int j = 1; j <= 5; j++) {
//		InsertElem(L, j, j);
//		int lengthList = LengthList(L);
//		cout << "���Ԫ�� " << j << " ��, ������Ϊ: " << lengthList << endl;
//	}
//	cout << "------------------------" << endl;
//	for (int i = 1; i <= 5; i++) {
//		int e = GetIndexElem(L, i);
//		printf("����ĵ� %d ��Ԫ����: %d\n", i, e);
//	}
//	int m;
//	int index = 1;
//	DeleteIndexElem(L, index, m);
//	int lengthList1 = LengthList(L);
//	cout << "ɾ����Ԫ����: " << m << ", ������Ϊ: " << lengthList1 << endl;
//	return 0;
//}