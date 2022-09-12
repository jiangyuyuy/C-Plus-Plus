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
//void merge_sort(vector<int>& vec) {
//	if (vec.size() < 2) {
//		return;
//	}
//	int mid = vec.size() / 2;
//	vector<int>sub_vec1;
//	vector<int>sub_vec2;
//	for (int i = 0; i < mid; i++) {
//		sub_vec1.push_back(vec[i]);
//	}
//	for (int i = mid; i < vec.size(); i++) {
//		sub_vec2.push_back(vec[i]);
//	}
//	merge_sort(sub_vec1);
//	merge_sort(sub_vec2);
//	vec.clear();
//	merge_sort_two_vec(sub_vec1, sub_vec2, vec);
//}
//
//int main() {
//	int test[] = { 4,2,3,6,8,5,7,30,20 };
//	vector<int>vec;
//	for (int j = 0; j < 9; j++) {
//		vec.push_back(test[j]);
//	}
//
//	merge_sort(vec);
//	for (int i = 0; i < vec.size(); i++) {
//		cout << "[" << vec[i] << "]" << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
