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
//// 方法1--简单版
//class Solution1 {
//public:
//	vector<TreeNode*> flatten(TreeNode* root) {
//		vector<TreeNode*>node_vec;
//		preorder(root, node_vec);
//		for (int i = 1; i < node_vec.size(); i++) {
//			node_vec[i - 1]->left = NULL;
//			node_vec[i - 1]->right = node_vec[i];
//		}
//		return node_vec;
//	}
//	void preorder(TreeNode* node, vector<TreeNode*>& node_vec) {
//		if (!node) {
//			return;
//		}
//		node_vec.push_back(node);
//		preorder(node->left, node_vec);
//		preorder(node->right, node_vec);
//	}
//};
//
//// 方法2
//class Solution2 {
//public:
//	void flatten(TreeNode* root) {
//		TreeNode* last = NULL;
//		preorder(root, last);
//	}
//	void preorder(TreeNode* node, TreeNode* &last) {
//		if (!node) {
//			return;
//		}
//		if (!node->left && &node->right) {
//			last = node;
//			return;
//		}
//		TreeNode* left = node->left;
//		TreeNode* right = node->right;
//		TreeNode* left_last = NULL;
//		TreeNode* right_last = NULL;
//		if (left) {
//			preorder(left, left_last);  // 若有左子树，则递归将左子树变为单链表
//			node->left = NULL;
//			node->right = left;
//			last = left_last;
//		}
//		if (right) {
//			preorder(right, right_last);
//			if (left_last) {
//				left_last->right = right;
//			}
//			last = right_last;
//		}
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
//	Solution1 solve1;
//	vector<TreeNode*>node_vec = solve1.flatten(&a);
//	for (int i = 0; i < node_vec.size(); i++) {
//		cout << "[" << node_vec[i]->val << "] ";
//	}
//	cout << endl;
//
//	Solution2 solve2;
//	solve2.flatten(&a);
//	TreeNode* head = &a;
//	while (head) {
//		if (head->left) {
//			cout << "ERROR" << endl;
//		}
//		else {
//			cout << "[" << head->val << "] ";
//			head = head->right;
//		}	
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}