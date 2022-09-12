//#include<iostream>
//#include<string>
//using namespace std;
//
//// 多项式的加法与乘法
//typedef struct PolyNode* Polynomial;  // 结构指针
//struct PolyNode {
//	int coef;  // 系数
//	int expon;  // 指数
//	Polynomial link;  // 指针指向下一个节点
//};
//
//// 读多项式
//void Attach(int c, int e, Polynomial* pRear) {
//	Polynomial P;
//	P = (Polynomial)malloc(sizeof(struct PolyNode));
//	P->coef = c;  // 对新结点进行赋值
//	P->expon = e;
//	P->link = NULL;
//	(*pRear)->link = P;
//	*pRear = P;  // 修改 pRear 的值
//}
//
//Polynomial ReadPoly() {
//	Polynomial P, Rear, t;
//	int c, e, N;
//	scanf("%d", &N);
//	P = (Polynomial)malloc(sizeof(struct PolyNode));  // 链表头空节点
//	P->link = NULL;
//	Rear = P;
//	while (N--) {
//		scanf("%d %d", &c, &e);
//		Attach(c, e, &Rear);  // 将当前项插入到多项式尾部
//	}
//	t = P; P = P->link; free(t);  // 删除临时生成的头节点
//	return P;
//}
//
//int main()
//{
//	Polynomial P1, P2, PP, PS;
//	P1 = ReadPoly();
//	P2 = ReadPoly();
//	PP = Multi(P1, P2);
//	PrintPoly(PP);
//	PS = Add(P1, P2);
//	PrintPoly(PS);
//	return 0;
//}