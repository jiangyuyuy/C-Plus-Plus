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
//void preorder_print(TreeNode*node,int layer){
//	if (!node){
//		return;
//	}
//	for (int i = 0; i < layer; i++) {
//		cout << "-----";
//	}
// // ǰ�к������Ϊ������ȱ���
//	cout << "[" << node->val << "]" << endl;  // ǰ�����
//	preorder_print(node->left, layer + 1);  // ����������
//	// cout << "[" << node->val << "]" << endl;  �������
//	preorder_print(node->right, layer + 1);  // ����������
//	// cout << "[" << node->val << "]" << endl;  �������
//}
//
//int main() {
//	
//	TreeNode a(1);
//	TreeNode b(2);
//	TreeNode c(5);
//	TreeNode d(3);
//	TreeNode e(4);
//	TreeNode f(6);
//
//	a.left = &b;
//	a.right = &c;
//	b.left = &d;
//	b.right = &e;
//	c.right = &f;
//	preorder_print(&a, 0);
//	system("pause");
//	return 0;
//}