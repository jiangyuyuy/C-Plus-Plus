//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//
//// 二分查找（递归）
//bool binary_search1(vector<int>& sort_array,  // 排序数组
//	int begin,  // 待搜索的左端
//	int end,  // 待搜索的右端
//	int target) {  // 搜索目标
//	if (begin > end) {
//		return false;
//	}
//	int mid = (begin + end) / 2;
//	if (target == sort_array[mid]) {
//		return true;
//	}
//	else if (target < sort_array[mid]) {
//		return binary_search1(sort_array, begin, mid - 1, target);
//	}
//	else if (target > sort_array[mid]) {
//		return binary_search1(sort_array, mid + 1, end, target);
//	}
//}
//
//// 二分查找（循环）
//bool binary_search2(vector<int>& sort_array, int target) {
//	int begin = 0;
//	int end = sort_array.size() - 1;
//	while (begin <= end) {
//		int mid = (begin + end) / 2;
//		if (target == sort_array[mid]) {
//			return true;
//		}
//		else if (target < sort_array[mid]) {
//			end = mid - 1;
//		}
//		else if (target > sort_array[mid]) {
//			begin = mid + 1;
//		}
//	}
//	return false;
//}
//
//vector<int>search_array(vector<int>& sort_array, 
//	vector<int>& random_array) {
//	vector<int>result;
//	for (int i = 0; i < random_array.size(); i++) {
//		int res = binary_search1(sort_array,
//			0,
//			sort_array.size() - 1,
//			random_array[i]);
//		result.push_back(res);
//	}
//	return result;
//}
//
//int main() {
//	int A[] = { -1,2,5,20,90,100,207,800 };
//	int B[] = { 50,90,3,-1,207,80 };
//	vector<int>sort_array;
//	vector<int>random_array;
//	vector<int>c;
//	for (int i = 0; i < 8; i++) {
//		sort_array.push_back(A[i]);
//	}
//	for (int j = 0; j < 6; j++) {
//		random_array.push_back(B[j]);
//	}
//	c = search_array(sort_array, random_array);
//	for (int i = 0; i < c.size(); i++) {
//		cout << "[" << c[i] << "] ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}