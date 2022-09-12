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
//	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
//};
//
//vector<int>rightSideView(TreeNode* root) {
//	vector<int>view;  // 按层遍历的最后一个节点
//	queue < std::pair<TreeNode*, int>>Q;  // 宽度优先搜索<节点，层数>
//	if (root) {
//		Q.push(std::make_pair(root, 0));
//	}
//	while (!Q.empty()) {
//		TreeNode* node = Q.front().first;
//		int depth = Q.front().second;
//		Q.pop();
//		if (view.size() == depth) {
//			view.push_back(node->val);
//		}
//		else {
//			view[depth] = node->val;
//		}
//		if (node->left) {
//			Q.push(std::make_pair(node->left, depth + 1));
//		}
//		if (node->right) {
//			Q.push(std::make_pair(node->right, depth + 1));
//		}
//	}
//	return view;
//}
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
//	vector<int>view = rightSideView(&a);
//	for (int i = 0; i < view.size(); i++) {
//		cout << "[" << view[i] << "] ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}