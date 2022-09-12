//#include<iostream>
//using namespace std;
//
//int main() {
//	const int Max_N = 5;  // 一共5个顶点
//	int Graph[Max_N][Max_N] = { 0 };  // 使用邻接矩阵表示
//	Graph[0][2] = 1;
//	Graph[0][4] = 1;
//	Graph[1][0] = 1;
//	Graph[1][2] = 1;
//	Graph[2][3] = 1;
//	Graph[3][4] = 1;
//	Graph[4][3] = 1;
//
//	/*
//	Graph:
//	0 0 1 0 1
//	1 0 1 0 0
//	0 0 0 1 0
//	0 0 0 0 1
//	0 0 0 1 0
//	*/
//
//	cout << "Graph: " << endl;
//	for (int i = 0; i < Max_N; i++) {
//		for (int j = 0; j < Max_N;  j++) {
//			cout << Graph[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	return 0;
//}