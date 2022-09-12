//#include<iostream>
//#include<map>
//#include<vector>
//using namespace std;
//struct RandomListNode {
//	int label;
//	RandomListNode* next, * random;
//	RandomListNode(int x) :label(x), next(NULL), random(NULL) {}
//};
//
//class Solution {
//public:
//	RandomListNode* copyRandomList(RandomListNode* head) {
//		std::map<RandomListNode*, int>node_map;
//		std::vector<RandomListNode*>node_vec;
//		RandomListNode* ptr = head;
//		int i = 0;
//		while (ptr) {
//			node_vec.push_back(new RandomListNode(ptr->label));  
//			// node_vec 保存的是新链表各节点地址
//			node_map[ptr] = i;  // 记录原始链表地址至节点位置的 node_map
//			ptr = ptr->next;  // 遍历原始链表
//			i++;
//		}
//		node_vec.push_back(0);
//		ptr = head;
//		i = 0;  // 再次遍历原始链表，连接新链表的 next 指针，random 指针
//		while (ptr) {
//			node_vec[i]->next = node_vec[i + 1];  // 连接新链表 next 指针
//			if (ptr->random) {  // 当 random 指针不空时
//				int id = node_map[ptr->random];
//				node_vec[i]->random = node_vec[id];  // 连接新链表的 random 指针 
//				// 原链表 random 指针指向的位置即 id
//			}
//			ptr = ptr->next;
//			i++;
//		}
//		return node_vec[0];
//	}
//};
//
//int main() {
//	RandomListNode a(1);
//	RandomListNode b(2);
//	RandomListNode c(3);
//	RandomListNode d(4);
//	RandomListNode e(5);
//	a.next = &b;
//	b.next = &c;
//	c.next = &d;
//	d.next = &e;
//	a.random = &c;
//	b.random = &d;
//	c.random = &c;
//	e.random = &d;
//	
//	Solution solve;
//	RandomListNode* head = solve.copyRandomList(&a);
//	while (head) {
//		cout << "label: " << head->label << "  ";
//		if (head->random) {
//			cout << "random: " << head->random->label << endl;
//		}
//		else {
//			cout << "random: NULL" << endl;
//		}
//		head = head->next;
//	}
//
//	system("pause");
//	return 0;
//}
