//#include<iostream>
//using namespace std;
//
//#define MAXSIZE 255
//
//typedef struct {
//	char ch[MAXSIZE + 1];  // 储存串的一维数组
//	int length;
//}SString;
//
//// 串的链式储存结构--块链结构
//#define CHUNKSIZE 80
//typedef struct Chunk {
//	char ch[CHUNKSIZE];
//	struct Chunl* next;
//}Chunk;
//
//typedef struct {
//	Chunk* head, * tail;
//	int curlen;
//}LString;  // 字符串的块链结构
//
//int Index_BF(SString S, SString T, int pos) {
//	int i = pos, j = 1;  // 暴力求解法, O(m*n)
//	while (i <= S.length && j <= T.length) {
//		if (S.ch[i] == T.ch[i]) {
//			i++;
//			j++;
//		}
//		else {
//			i = i - j + 2;
//			j = 1;
//		}
//	}
//	if (j >= T.length) {
//		return i - T.length;
//	}
//	else {
//		return 0;
//	}
//}
