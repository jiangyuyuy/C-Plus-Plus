//#include<iostream>
//#include<string>
//using namespace std;
//
///* 求子序列的最大和 */
//
//int MaxSubseqSum(int A[], int N)
//{
//	int ThisSum = 0;
//	int MaxSum = 0;
//	int i;
//	for (i = 0; i < N; i++) {
//		ThisSum += A[i];
//		if (ThisSum > MaxSum) {
//			MaxSum = ThisSum;
//		}
//		else if (ThisSum < 0) {
//			ThisSum = 0;
//		}
//	}
//	return MaxSum;
//}
//
//int main()
//{
//	int arr[5] = { -9, 4, -3, 2, 6 };
//	int N = 5;
//	int MaxSum = MaxSubseqSum(arr, N);
//	cout << "MaxSum: " << MaxSum << endl;
//	return 0;
//}