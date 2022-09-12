//#include<vector>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x) :val(x), next(NULL) {}
//};
//
//bool cmp(const ListNode* a, const ListNode* b) {
//	return a->val < b->val;
//}
//
//int main() {
//	ListNode a(3);
//	ListNode b(2);
//	ListNode c(5);
//	ListNode d(0);
//	std::vector<ListNode*>node_vec;
//	node_vec.push_back(&a);
//	node_vec.push_back(&b);
//	node_vec.push_back(&c);
//	node_vec.push_back(&d);
//
//	std::sort(node_vec.begin(), node_vec.end(), cmp);
//	cout << "node_vec->val: ";
//	for (int i = 0; i < node_vec.size(); i++) {
//		cout << node_vec[i]->val << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}