//#include<iostream>
//#include<string>
//using namespace std;
//
//// ʹ�������ʾ������ջ
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
//		cout << "ջ����" << endl;
//		return;
//	}
//	if (Tag == 1) {  // ��ʾ�Ե�һ����ջ����
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
//			cout << "ջ��1��" << endl; return NULL;
//		}
//		else {return PtrS->Data[(PtrS->Top1)--];}
//	}
//	else {
//		if (PtrS->Top2 == MAXSIZE) {
//			cout << "��ջ2��" << endl; return NULL;
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