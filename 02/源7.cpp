//#include<iostream>
//#include<string>
//using namespace std;
//
//// 队列
//#define MaxSize 10
//struct QNode {
//	int Data[MaxSize];
//	int rear;
//	int front;
//};
//
//typedef struct QNode* Queue;
//
//// 入队
//void AddQ(Queue PtrQ, int item) {
//	if (PtrQ->rear + 1 % MaxSize == PtrQ->front) {
//		cout << "队列已满" << endl;
//		return;
//	}
//	PtrQ->rear = (PtrQ->rear + 1) % MaxSize;
//	PtrQ->Data[PtrQ->rear] = item;
//}
//
////出队
//int DeleteQ(Queue PtrQ) {
//	if (PtrQ->front == PtrQ->rear) {
//		cout << "队列为空" << endl; return;
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