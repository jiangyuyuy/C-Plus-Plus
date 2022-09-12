#include<iostream>
#include<string>
using namespace std;

// 二叉树的存储
typedef struct TreeNode* BinTree;
typedef BinTree Position;
struct TreeNode {
	int Data;
	BinTree Left;
	BinTree Right;
};

// 先序遍历（根-->左边-->右边)
void PreOrderTraversal(BinTree BT) {  // BT为指针，指向第一个根节点
	if (BT) {
		cout << "Data: " << BT->Data << endl;
		PreOrderTraversal(BT->Left);
		PreOrderTraversal(BT->Right);
	}
}

// 中序遍历（左边-->根-->右边)
void PreOrderTraversal(BinTree BT) {  // BT为指针，指向第一个根节点
	if (BT) {
		PreOrderTraversal(BT->Left);
		cout << "Data: " << BT->Data << endl;
		PreOrderTraversal(BT->Right);
	}
}

// 后序遍历（左边-->右边-->根)
void PreOrderTraversal(BinTree BT) {  // BT为指针，指向第一个根节点
	if (BT) {
		PreOrderTraversal(BT->Left);
		PreOrderTraversal(BT->Right);
		cout << "Data: " << BT->Data << endl;
	}
}

// 层序遍历
void LevelOrderTraversal(BinTree BT) {
	Queue Q;
	BinTree T;
	if (!BT) { return; }
	Q = CreateQueue(MaxSize);
	Add(Q, BT);
	While(!IsEmptyQ(Q)) {
		T = DeleteQ(Q);
		cout << "Data: " << T->Data << endl;
		if (T->Left) {
			AddQ(Q, T->Left);
		}if (T->Right) {
			AddQ(Q, T->Right);
		}
	}
}

// 二叉树的应用--------------------------------
// 输出二叉树的叶子节点
void PreOrderTraversal(BinTree BT) {
	if (BT) {
		if (!BT->Left && !BT->Right) {
			cout << "Data: " << BT->Data << endl;
		}
		PreOrderTraversal(BT->Left);
		PreOrderTraversal(BT->Right);
	}
}

// 求二叉树的高度
int PostOrderGetHeight(BinTree BT) {
	int HL, HR, MaxH;
	if (BT) {
		HL = PostOrderGetHeight(BT->Left);
		HR = PostOrderGetHeight(BT->Right);
		MaxH = (HL > HR) ? HL : HR;
		return (MaxH + 1);
	}
	else {
		return 0;
	}
}

// 二叉树查找
Position IterFind(int x, BinTree BST) {
	while (BST) {
		if (x > BST->Data) {
			BST = BST->Right;
		}
		else if (x < BST->Data) {
			BST = BST->Left;
		}
		else {
			return BST;
		}
	}
	return NULL;
}

// 最大值查找
Position FindMax(BinTree BST) {
	if (BST) {
		while (BST->Right) {
			BST = BST->Right;
		}
	}
	return BST;
}

// 最小值查找
Position FindMin(BinTree BST) {
	if (!BST) return NULL;
	else if (!BST->Left) {
		return BST;
	}
	else {
		return FindMin(BST->Left);
	}

}

// 二叉树的插入
BinTree Insert(int x, BinTree BST) {
	if (!BST) {
		BST = malloc(sizeof(struct TreeNode));
		BST->Data = x;
		BST->Left = BST->Right = NULL;
	}
	else {
		if (x < BST->Data) {
			BST->Left = Insert(x, BST->Left);  // 递归插入左子树
		}
		else if (x > BST->Data) {
			BST->Right = Insert(x, BST->Right);
		}
	}
	return BST;
}

// 二叉树的删除
BinTree Delete(int x, BinTree BST) {
	Position Tmp;
	if (!BST) {
		cout << "要删除的元素未找到！" << endl;
	}
	else if(x < BST->Data) {
		BST->Left = Delete(x, BST->Left);
		// 返回删除某个左子树节点后新的左子树根节点地址
	}
	else if (x > BST->Data) {
		BST->Right = Delete(x, BST->Right);
	}
	else {
		if (BST->Left && BST->Right) {
			Tmp = FindMin(BST->Right);
			BST->Data = Tmp->Data;
			BST->Right = Delete(BST->Data, BST->Right);
		}
		else {
			Tmp = BST;
			if (!BST->Left) {
				BST = BST->Right;
			}
			else if (!BST->Right) {
				BST = BST->Left;
			}
			free(Tmp);
		}
	}
	return BST;
}

int main()
{

	return 0;
}