//#include<iostream>
//using namespace std;
//
//class Box {
//public:
//	Box() {
//		cout << "���ù��캯��" << endl;
//	}
//	~Box() {
//		cout << "������������" << endl;
//	}
//
//};
//
//int main() {
//	double* pvalue = NULL;  // ��ʼ��ΪNULL��ָ��
//	pvalue = new double;  // Ϊ���������ڴ�
//
//	*pvalue = 20.0;  // �ڷ���ĵ�ַ������ֵ
//	cout << "Value of pvalue: " << *pvalue << endl;
//	delete pvalue;  // �ͷ��ڴ�
//
//	// ���鶯̬�ڴ����
//	int* arr = NULL;
//	// һά����
//	arr = new int[5];
//	for (int i = 0; i < 3; i++) {
//		*(arr + i) = i;
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("[%d]\n", *(arr + i));
//	}
//	delete[] arr;
//
//	// ��ά���� m X n
//	int m = 2;
//	int n = 3;
//	int** arr2;
//	arr2 = new int* [m];
//	for (int i = 0; i < m; i++) {
//		arr2[i] = new int[n];
//		// arr2[i]�����ά�����һ��һά������׵�ַ
//		for (int j = 0; j < n; j++) {
//			*(arr2[i] + j) = i + j;
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("[%d] ", *(arr2[i] + j));
//		}
//		cout << endl;
//	}
//	// �ͷ�
//	for (int i = 0; i < m; i++) {
//		delete[]arr2[i];
//	}
//	delete[]arr2;
//
//	// ����Ķ�̬�ڴ����
//	Box* myBox = new Box[4];
//	delete[]myBox;
//
//	cout << endl;
//	return 0;
//}