//#include<iostream>
//using namespace std;
//
//struct ListNode {
//	int val;  // 数据域
//	ListNode* next;  // 指针域
//	ListNode(int x) :val(x), next(NULL) {}  // 构造函数
//};
//
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {  // 传入链表头节点指针
//		ListNode* new_head = NULL;  // 指向新链表头节点的指针
//		while (head) {
//			ListNode* next = head->next;  // 备份 head->next
//			head->next = new_head;  // 更新 head->next
//			new_head = head;  // 更新 new_head
//			head = next;  // 遍历链表
//		}
//		return new_head;
//	}
//};
//
//int main() {
//	ListNode a(1);
//	ListNode b(2);
//	ListNode c(3);
//	ListNode d(4);
//	ListNode e(5);
//	a.next = &b;
//	b.next = &c;
//	c.next = &d;
//	d.next = &e;
//	Solution solve;
//	ListNode* head = &a;
//	cout << "逆置前：" << endl;
//	cout << "head_val: ";
//	while (head) {
//		cout << head->val << "  ";
//		head = head->next;
//	}
//	cout << endl;
//	head = solve.reverseList(&a);
//	cout << "逆置后：" << endl;
//	cout << "head_val: ";
//	while (head) {
//		cout <<  head->val << "  ";
//		head = head->next;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//
//}