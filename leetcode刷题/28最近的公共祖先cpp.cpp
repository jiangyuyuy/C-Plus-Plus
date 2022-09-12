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
//	TreeNode* lowerCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* g) {
//		vector<TreeNode*>path;
//		vector<TreeNode*>node_p_path;
//		vector<TreeNode*>node_g_path;
//		int finish = 0;
//		preorder(root, p, path, node_p_path, finish);
//		path.clear();
//		finish = 0;
//		preorder(root, g, path, node_g_path, finish);
//		int path_len = 0;  // 较短路径的长度
//		if (node_p_path.size() < node_g_path.size()) {
//			path_len = node_p_path.size();
//		}
//		else {
//			path_len = node_g_path.size();
//		}
//		TreeNode* result = 0;
//		for (int i = 0; i < path_len; i++) {
//			if (node_p_path[i] == node_g_path[i]) {
//				result = node_p_path[i];
//			}
//		}
//		return result;
//	}
//
//	// 求根节点至某节点的路径
//	void preorder(TreeNode* node,  // 根节点
//		TreeNode* search,  // 要搜索的节点
//		vector<TreeNode*>& path,  // 遍历的节点路径栈
//		vector<TreeNode*>& result,  // 最终搜索到的节点路径
//		int& finish) {  // 若找到节点为 1，未找到为 0
//		if (!node || finish) {
//			return;
//		}
//		path.push_back(node);
//		if (node == search) {
//			finish == 1;
//			result = path;
//		}
//		preorder(node->left, search, path, result, finish);
//		preorder(node->right, search, path, result, finish);
//		path.pop_back();
//	}
//};
//
//int main() {
//	TreeNode a(1);
//	TreeNode b(2);
//	TreeNode c(3);
//	TreeNode d(4);
//	TreeNode e(5);
//	TreeNode f(6);
//
//	a.left = &b;
//	a.right = &c;
//	b.left = &d;
//	b.right = &e;
//	c.right = &f;
//
//	Solution solve;
//	TreeNode* result = solve.lowerCommonAncestor(&a, &d, &e);
//	cout << "最近公共祖先为: " << result->val << endl;
//	system("pause");
//	return 0;
//}