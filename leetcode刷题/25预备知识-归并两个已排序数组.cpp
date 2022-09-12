//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//
//void merge_sort_two_vec(vector<int>& sub_vec1, vector<int>& sub_vec2, vector<int>& vec) {
//	// 数组1，数组2，合并后的数组
//	int i = 0;
//	int j = 0;
//	while (i < sub_vec1.size() && j < sub_vec2.size()) {
//		if (sub_vec1[i] <= sub_vec2[j]) {
//			vec.push_back(sub_vec1[i]);
//			i++;
//		}
//		else {
//			vec.push_back(sub_vec2[j]);
//			j++;
//		}
//	}
//	for (; i < sub_vec1.size(); i++) {
//		vec.push_back(sub_vec1[i]);
//	}
//	for (; j < sub_vec2.size(); j++) {
//		vec.push_back(sub_vec2[j]);
//	}
//}
//
//int main() {
//	int test1[] = { 2,5,8,20 };
//	int test2[] = { 1,3,5,7,30,50 };
//	vector<int>sub_vec1;
//	vector<int>sub_vec2;
//	vector<int>vec;
//	for (int i = 0; i < 4; i++) {
//		sub_vec1.push_back(test1[i]);
//	}
//	for (int j = 0; j < 6; j++) {
//		sub_vec2.push_back(test2[j]);
//	}
//
//	merge_sort_two_vec(sub_vec1, sub_vec2, vec);
//	for (int i = 0; i < vec.size(); i++) {
//		cout << "[" << vec[i] << "]" << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}