//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//
//int main() {
//	int char_map[128] = { 0 };  // 字符哈希
//	// ASC2码从0~127，故使用数组
//	string str = "127efgaaxxy";
//
//	for (int i = 0; i < str.length(); i++) {
//		char_map[str[i]]++;
//	}
//
//	for (int i = 0; i < 128; i++) {
//		if (char_map[i] > 0) {
//			printf("[%c][%d]: %d\n", i, i, char_map[i]);
//		}
//	}
//
//
//
//	// 哈希表排序
//	int random_[10] = { 2,1,5,7,8,9,1,3,7,7 };
//	int hash_map_[10] = { 0 };
//	for (int i = 0; i < 10; i++) {
//		hash_map_[random_[i]]++;
//	}
//
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < hash_map_[i]; j++) {
//			cout << i << " ";
//		}
//	}
//	cout << endl;
//	cout << "hash_map_: ";
//	for (int i = 0; i < 10; i++) {
//		cout << hash_map_[i] << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}