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
//	ListNode* reverseList(ListNode* head, int m, int n) {
//		int change_len = n - m + 1;  // 需要逆置的节点数
//		ListNode* pre_head = NULL;  // 初始化开始逆置节点的前驱, 节点1
//		ListNode* result = head;  // 最终转换后的链表头节点，非特殊情况即为 head
//		while (head && --m) {  // 将 head 向前移动 m-1 个位置
//			pre_head = head;  // 记录 head 前驱
//			head = head->next;
//		}
//		ListNode* modify_list_tail = head;
//		ListNode* new_head = NULL;
//		while (head && change_len) {
//			ListNode* next = head->next;
//			head->next = new_head;
//			new_head = head;
//			head = next;
//			change_len--;  // 每完成一个节点逆置，change_len - 1
//		}
//		modify_list_tail->next = head;  // 连接置换后的链表尾与逆置段的后一个节点
//
//		if (pre_head) {
//			pre_head->next = new_head;
//		}
//		else {
//			result = new_head;
//		}
//		return result;
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
//	head = solve.reverseList(&a, 2, 4);
//	cout << "逆置后：" << endl;
//	cout << "head_val: ";
//	while (head) {
//		cout << head->val << "  ";
//		head = head->next;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}