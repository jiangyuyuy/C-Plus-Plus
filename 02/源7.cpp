//#include<iostream>
//#include<string>
//using namespace std;
//
//// ����
//#define MaxSize 10
//struct QNode {
//	int Data[MaxSize];
//	int rear;
//	int front;
//};
//
//typedef struct QNode* Queue;
//
//// ���
//void AddQ(Queue PtrQ, int item) {
//	if (PtrQ->rear + 1 % MaxSize == PtrQ->front) {
//		cout << "��������" << endl;
//		return;
//	}
//	PtrQ->rear = (PtrQ->rear + 1) % MaxSize;
//	PtrQ->Data[PtrQ->rear] = item;
//}
//
////����
//int DeleteQ(Queue PtrQ) {
//	if (PtrQ->front == PtrQ->rear) {
//		cout << "����Ϊ��" << endl; return;
//	}
//	else {
//		PtrQ->front = (PtrQ->front + 1) % MaxSize;
//		return PtrQ->Data[PtrQ->front];
//	}
//}
//
//int main()
//{
//
//	return 0;
//}