#include<iostream>
using namespace std;

//#define LIST_INIT_SIZE 100
//typedef int ElemType;
//typedef struct {
//	ElemType elem[LIST_INIT_SIZE];
//	int length;  // 当前长度
//}SqList;

// 多项式顺序储存结构
// P(x) = p1 * x^e1 + ...
// 线性表: P(x) = ((p1, e1), (p2, e2)...)

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define MAXSIZE 100
typedef int Status;

typedef struct {  // 多项式非零项的定义
	float p;  // 系数
	int x;  // 指数
}Polynomial;

typedef struct {
	Polynomial* elem;
	int length;  // 多项式的项数
}SqList_;  // 多项式顺序储存结构类型为 SqList

// ----------------------------------------------

typedef struct {
	int *elem;
	int length;
}SqList;

void InitList_Sq(SqList& L) {  // 1. 初始化一个空的线性表
	L.elem = new int[MAXSIZE];  // 数组最大储存空间
	if (!L.elem) {  // 内存分配失败
		exit(OVERFLOW);
	}
	L.length = 0;  // 空的线性表长度为0
}

void DestroyList(SqList& L) {  // 2. 销毁线性表，线性表不存在
	if (L.elem) {
		delete L.elem;  // 释放内存空间
	}
}

void ClearList(SqList& L) {  // 3. 将线性表长度设为0，没有销毁
	L.length = 0;
}

Status GetListLength(SqList& L) {  // 4. 获取线性表的长度
	return L.length;
}

Status IsListEmpty(SqList& L) {  // 5. 判断线性表是否为空
	if (L.length == 0) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

Status GetListElem(SqList& L, int i, int e) {  // 6. 按索引查找元素
	// 数组从 0 开始，表从 1 开始
	if (i<1 || i>L.length) {
		return ERROR;
	}
	e = L.elem[i - 1];
	return OK;
}

Status LocateElem(SqList& L, int e) {  // 7. 按元素值查找
	for (int i = 0; i < L.length; i++) {
		if (L.elem[i] == e) {
			return i + 1;
		}
	}
	return ERROR;  // 查找失败
}

Status InsertElem(SqList& L, int i, int e) {  // 8.插入元素
	// 1.判断插入位置是否合法；2.数组储存空间是否已满
	if (i<1 || i>L.length + 1) {
		return ERROR;
	}
	if (L.length == MAXSIZE) {
		return ERROR;
	}
	for (int j = L.length - 1; j >= i; j--) {
		L.elem[j + 1] = L.elem[j];
	}
	L.elem[i - 1] = e;
	L.length++;
	return OK;
}

Status DeleteElem(SqList& L, int i) {
	if (i<1 || i>L.length + 1) {
		return ERROR;
	}
	if (L.length == 0) {
		return ERROR;
	}
	for (int j = i; j <= L.length - 1; j++) {
		L.elem[j - 1] = L.elem[j];
	}
	L.length--;
	return OK;
}

Status main() {
	SqList L;
	InitList_Sq(L);
	InsertElem(L, 1, 1);
	InsertElem(L, 2, 2);
	cout << "length: " << L.length << endl;
	for (int i = 0; i < L.length; i++) {
		printf("L.elem[%d] = %d\n", i, L.elem[i]);
	}
	ClearList(L);
	cout << "length: " << L.length << endl;
	for (int i = 0; i < L.length; i++) {
		printf("L.elem[%d] = %d\n", i, L.elem[i]);
	}
	DestroyList(L);
	cout << endl;
	system("pause");
	return 0;
}
