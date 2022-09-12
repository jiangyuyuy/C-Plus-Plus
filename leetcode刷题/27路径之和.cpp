//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
//}; 
//
//class Solution {
//public:
//	std::vector<vector<int>>pathSum(TreeNode* root, int sum) {
//		vector<vector<int>>result;  // 储存满足条件的数组
//		vector<int>path;
//		int path_value = 0;
//		preorder(root, path_value, sum, path, result);
//		return result;
//	}
//	void preorder(TreeNode* node, int path_value, 
//		int sum, vector<int>& path, 
//		vector<vector<int>>& result) {
//		if (!node) {
//			return;
//		}
//		path_value += node->val;
//		path.push_back(node->val);
//		if (path_value == sum && !node->left && !node->left) {
//			result.push_back(path);
//		}
//		preorder(node->left, path_value, sum, path, result);
//		preorder(node->right, path_value, sum, path, result);
//		path_value -= node->val;
//		path.pop_back();
//	}
//};
//
//int main() {
//	TreeNode a(1);
//	TreeNode b(2);
//	TreeNode c(5);
//	TreeNode d(3);
//	TreeNode e(4);
//	TreeNode f(1);
//
//	a.left = &b;
//	a.right = &c;
//	b.left = &d;
//	b.right = &e;
//	c.right = &f;
//
//	Solution solve;
//	std::vector<vector<int>>result = solve.pathSum(&a, 7);
//	for (int i = 0; i < result.size(); i++) {
//		for (int j = 0; j < result[i].size(); j++) {
//			cout << "[" << result[i][j] << "]" << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}