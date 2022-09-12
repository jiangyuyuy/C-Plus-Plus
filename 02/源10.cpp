#include<iostream>
#include<string>
using namespace std;

// �������Ĵ洢
typedef struct TreeNode* BinTree;
typedef BinTree Position;
struct TreeNode {
	int Data;
	BinTree Left;
	BinTree Right;
};

// �����������-->���-->�ұ�)
void PreOrderTraversal(BinTree BT) {  // BTΪָ�룬ָ���һ�����ڵ�
	if (BT) {
		cout << "Data: " << BT->Data << endl;
		PreOrderTraversal(BT->Left);
		PreOrderTraversal(BT->Right);
	}
}

// ������������-->��-->�ұ�)
void PreOrderTraversal(BinTree BT) {  // BTΪָ�룬ָ���һ�����ڵ�
	if (BT) {
		PreOrderTraversal(BT->Left);
		cout << "Data: " << BT->Data << endl;
		PreOrderTraversal(BT->Right);
	}
}

// ������������-->�ұ�-->��)
void PreOrderTraversal(BinTree BT) {  // BTΪָ�룬ָ���һ�����ڵ�
	if (BT) {
		PreOrderTraversal(BT->Left);
		PreOrderTraversal(BT->Right);
		cout << "Data: " << BT->Data << endl;
	}
}

// �������
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

// ��������Ӧ��--------------------------------
// �����������Ҷ�ӽڵ�
void PreOrderTraversal(BinTree BT) {
	if (BT) {
		if (!BT->Left && !BT->Right) {
			cout << "Data: " << BT->Data << endl;
		}
		PreOrderTraversal(BT->Left);
		PreOrderTraversal(BT->Right);
	}
}

// ��������ĸ߶�
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

// ����������
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

// ���ֵ����
Position FindMax(BinTree BST) {
	if (BST) {
		while (BST->Right) {
			BST = BST->Right;
		}
	}
	return BST;
}

// ��Сֵ����
Position FindMin(BinTree BST) {
	if (!BST) return NULL;
	else if (!BST->Left) {
		return BST;
	}
	else {
		return FindMin(BST->Left);
	}

}

// �������Ĳ���
BinTree Insert(int x, BinTree BST) {
	if (!BST) {
		BST = malloc(sizeof(struct TreeNode));
		BST->Data = x;
		BST->Left = BST->Right = NULL;
	}
	else {
		if (x < BST->Data) {
			BST->Left = Insert(x, BST->Left);  // �ݹ����������
		}
		else if (x > BST->Data) {
			BST->Right = Insert(x, BST->Right);
		}
	}
	return BST;
}

// ��������ɾ��
BinTree Delete(int x, BinTree BST) {
	Position Tmp;
	if (!BST) {
		cout << "Ҫɾ����Ԫ��δ�ҵ���" << endl;
	}
	else if(x < BST->Data) {
		BST->Left = Delete(x, BST->Left);
		// ����ɾ��ĳ���������ڵ���µ����������ڵ��ַ
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