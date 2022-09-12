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
////typedef struct ListNode {  // 定义链表
////	int data;
////	struct Listnode* next;
////}Lnode, *LinkList;  // LinkList为指向结构体Lnode的指针类型
//// 定义链表 LinkList L; L表示头指针，也可以叫链表L
//// 定义节点 Lnode *p;
////p = L;  // p 指向头节点
////s = L->next;  // s 指向首元节点
////p = p->next;  // p 指向下一节点
//
////struct ListNode {  // 简洁版
////	int data;
////	ListNode* next;  // 存储下一个节点地址的指针域
////};
//
//typedef struct Student {
//	char num[8];  // 数据域
//	char name[8];  // 数据域
//	int score;  // 数据域
//}stu;
//
//typedef struct Lnode {
//	// stu data;
//	int data;
//	struct Lnode* next;  // 指针域
//}Lnode, *LinkList;
//
//// 1.单链表初始化（创建一个空表）
//Status InitList(LinkList& L) {
//	L = new Lnode;
//	L->next = NULL;
//	return OK;
//}
//
//// 2.判断链表是否为空（头节点指针与是否为空）
//Status ListIsEmpty(LinkList& L) {
//	if (L->next) {
//		return FALSE;
//	}
//	else {
//		return TRUE;
//	}
//}
//
//// 3.单链表的销毁，从头结点开始，依次释放所有节点
//Status DestroyList(LinkList& L) {
//	Lnode* p;  // p指向当前要销毁的节点
//	while (L) {
//		p = L;
//		L = L->next;
//		delete p;
//	}
//	return OK;
//}
//
//// 4.清空单链表，头指针和头节点还存在
//Status ClearList(LinkList& L) {
//	// 依次释放所有节点，并将头节点指针域设置为空
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
//// 5.求链表表长
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
//// 6.取单链表第 i 个元素
//Status GetIndexElem(LinkList& L, int i) {
//	// 获取链表第 i 个位置元素，并通过变量 e 返回值
//	Lnode* p;
//	p = L->next;
//	int j = 1;
//	while (p && j < i) {
//		p = p->next;
//		j++;
//	}
//	if (!p || j > i) {  // 第i个元素不存在
//		return ERROR;
//	}
//	int e = p->data;
//	return e;
//}
//
//// 7.按值查找链表
//Lnode* GetValueElem(LinkList& L, int e) {
//	// 按值查找并返回该值的地址
//	Lnode* p = L->next;
//	while (p && p->data != e) {
//		p = p->next;
//	}
//	return p;
//}
//
//Status _GetValueElem(LinkList& L, int e) {
//	// 按值查找并返回该值的位置索引
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
//// 8.插入元素（节点）
//Status InsertElem(LinkList& L, int e, int i) {
//	Lnode* p = L;
//	int j = 0;
//	while (p && i - 1 > j) {
//		p = p->next;
//		j++;
//	}
//	if (!p || j > i - 1) {
//		return ERROR;  // 插入位置非法
//	}
//	Lnode*s = new Lnode;
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return OK;
//}
//
//// 9.按位置索引删除节点
//Status DeleteIndexElem(LinkList& L, int i, int& e) {
//	Lnode* p = L;
//	int j = 0;
//	while (p->next && j < i - 1) {
//		p = p->next;
//		j++;
//	}
//	if (!(p->next) || j > i - 1) {  // 删除位置不合理(1=0或者删除节点不存在)
//		return ERROR;
//	}
//	Lnode* q = p->next;
//	p->next = q->next;
//	e = q->data;  // 保存删除节点里面的数据
//	delete q;  // 释放删除节点的空间
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
//		cout << "添加元素 " << j << " 后, 链表长度为: " << lengthList << endl;
//	}
//	cout << "------------------------" << endl;
//	for (int i = 1; i <= 5; i++) {
//		int e = GetIndexElem(L, i);
//		printf("链表的第 %d 个元素是: %d\n", i, e);
//	}
//	int m;
//	int index = 1;
//	DeleteIndexElem(L, index, m);
//	int lengthList1 = LengthList(L);
//	cout << "删除的元素是: " << m << ", 链表长度为: " << lengthList1 << endl;
//	return 0;
//}