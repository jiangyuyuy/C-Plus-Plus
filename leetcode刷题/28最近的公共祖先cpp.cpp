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
//		int path_len = 0;  // �϶�·���ĳ���
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
//	// ����ڵ���ĳ�ڵ��·��
//	void preorder(TreeNode* node,  // ���ڵ�
//		TreeNode* search,  // Ҫ�����Ľڵ�
//		vector<TreeNode*>& path,  // �����Ľڵ�·��ջ
//		vector<TreeNode*>& result,  // �����������Ľڵ�·��
//		int& finish) {  // ���ҵ��ڵ�Ϊ 1��δ�ҵ�Ϊ 0
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
//	cout << "�����������Ϊ: " << result->val << endl;
//	system("pause");
//	return 0;
//}