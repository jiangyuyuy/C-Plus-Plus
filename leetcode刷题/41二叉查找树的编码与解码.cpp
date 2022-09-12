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
//void change_to_string(int val, string& str_val) {
//	string tmp;
//	while (val) {
//		tmp += val % 10 + '0';  // 数字变成字符串
//		// 字符串转数字 val = val * 10 + '1' - '0'
//		val /= 10;
//	}
//	for (int i = tmp.length() - 1; i >= 0; i--) {
//		str_val += tmp[i];
//	}
//	str_val += '#';  // 转换的每个数字后面要添加 #
//}
//
//void BST_preorder(TreeNode* node, string& data) {
//	if (!node) {
//		return;
//	}
//	string str_val;
//	change_to_string(node->val, str_val);
//	data += str_val;  // 二叉树前序遍历
//	BST_preorder(node->left, data);
//	BST_preorder(node->right, data);
//}
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
//void preorder_print(TreeNode*node,int layer){
//	if (!node){
//		return;
//	}
//	for (int i = 0; i < layer; i++) {
//		cout << "-----";
//	}
// // 前中后序遍历为深度优先遍历
//	cout << "[" << node->val << "]" << endl;  // 前序遍历
//	preorder_print(node->left, layer + 1);  // 遍历左子树
//	// cout << "[" << node->val << "]" << endl;  中序遍历
//	preorder_print(node->right, layer + 1);  // 遍历右子树
//	// cout << "[" << node->val << "]" << endl;  后序遍历
//}
//
//class Codec {
//public:
//	string serialize(TreeNode* root) {
//		string data;  // data = "xx#xx#xxx#"
//		BST_preorder(root, data);
//		return data;
//	}
//	TreeNode* deserialize(string data) {
//		if (data.length() == 0) {
//			return NULL;
//		}
//		vector<TreeNode*>node_vec;
//		int val = 0;
//		for (int i = 0; i < data.length(); i++) {
//			if (data[i] == '#') {
//				node_vec.push_back(new TreeNode(val));
//				val = 0;
//			}
//			else {
//				val = val * 10 + data[i] - '0';
//			}
//		}
//		for (int i = 1; i < node_vec.size(); i++) {  // 把vector里面的节点插入到二叉查找树里面
//			BST_insert(node_vec[0], node_vec[i]);
//		}
//		return node_vec[0];
//	}
//};
//
//int main() {
//	TreeNode a(8);
//	TreeNode b(3);
//	TreeNode c(10);
//	TreeNode d(1);
//	TreeNode e(6);
//	TreeNode f(15);
//	a.left = &b;
//	a.right = &c;
//	b.left = &d;
//	b.right = &e;
//	c.right = &f;
//	Codec solve;
//	string data = solve.serialize(&a);
//	cout << "data: " << data.c_str() << endl;
//	TreeNode* root = solve.deserialize(data);
//	preorder_print(root, 0);
//	system("pause");
//	return 0;
//}