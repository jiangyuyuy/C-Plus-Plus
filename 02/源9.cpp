//#include<iostream>
//#include<string>
//using namespace std;
//
//// ����ʽ�ļӷ���˷�
//typedef struct PolyNode* Polynomial;  // �ṹָ��
//struct PolyNode {
//	int coef;  // ϵ��
//	int expon;  // ָ��
//	Polynomial link;  // ָ��ָ����һ���ڵ�
//};
//
//// ������ʽ
//void Attach(int c, int e, Polynomial* pRear) {
//	Polynomial P;
//	P = (Polynomial)malloc(sizeof(struct PolyNode));
//	P->coef = c;  // ���½����и�ֵ
//	P->expon = e;
//	P->link = NULL;
//	(*pRear)->link = P;
//	*pRear = P;  // �޸� pRear ��ֵ
//}
//
//Polynomial ReadPoly() {
//	Polynomial P, Rear, t;
//	int c, e, N;
//	scanf("%d", &N);
//	P = (Polynomial)malloc(sizeof(struct PolyNode));  // ����ͷ�սڵ�
//	P->link = NULL;
//	Rear = P;
//	while (N--) {
//		scanf("%d %d", &c, &e);
//		Attach(c, e, &Rear);  // ����ǰ����뵽����ʽβ��
//	}
//	t = P; P = P->link; free(t);  // ɾ����ʱ���ɵ�ͷ�ڵ�
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