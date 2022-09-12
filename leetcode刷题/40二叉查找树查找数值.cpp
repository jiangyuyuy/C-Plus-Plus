//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//void BST_insert(TreeNode* node, TreeNode* insert_node) {
//	if (insert_node->val < node->val) {
//		if (node->left) {
//			BST_insert(node->left, insert_node);
//		}
//		else {
//			node->left = insert_node;
//		}
//	}
//	else {
//		if (node->right) {
//			BST_insert(node->right, insert_node);
//		}
//		else {
//			node->right = insert_node;
//		}
//	}
//}
//
//bool BST_search(TreeNode* node, int val) {
//	if (val == node->val) {
//		return true;
//	}
//	if (node->val > val) {
//		if (node->left) {
//			return BST_search(node->left, val);
//		}
//		else {
//			return false;
//		}
//	}
//	else {
//		if (node->right) {
//			return BST_search(node->right, val);
//		}
//		else {
//			return false;
//		}
//	}
//}
//
//int main() {
//	TreeNode root(8);
//	vector<TreeNode*>node_vec;
//	int test[] = { 3,10,1,6,15 };
//	for (int i = 0; i < 5; i++) {
//		node_vec.push_back(new TreeNode(test[i]));
//	}
//	for (int i = 0; i < node_vec.size(); i++) {
//		BST_insert(&root, node_vec[i]);
//	}
//
//	for (int i = 0; i < 20; i++) {
//		bool res = BST_search(&root, i);
//		if (res) {
//			printf("%d in the BST.\n", i);
//		}
//		else {
//			printf("%d not in the BST.\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}