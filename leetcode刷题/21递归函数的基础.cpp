//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//
//void compute_sum_3(int i, int& sum) {
//	sum += i;
//}
//void compute_sum_2(int i, int& sum) {
//	sum += i;
//	compute_sum_3(i + 1, sum);
//}
//void compute_sum_1(int i, int& sum) {
//	sum += i;
//	compute_sum_2(i + 1, sum);
//}
//
//
//void compute_sum(int i, int& sum) {
//	if (i > 3) {
//		return;
//	}
//	sum += i;
//	cout << "sum_: " << sum << endl;
//	compute_sum(i + 1, sum);
//	
//}
//
//int main() {
//	int sum = 0;
//	compute_sum_1(1, sum);
//	cout << "sum: " << sum << endl;
//
//	int sum1 = 0;
//	compute_sum(1, sum1);
//	cout << "sum: " << sum1 << endl;
//
//	system("pause");
//	return 0;
//}