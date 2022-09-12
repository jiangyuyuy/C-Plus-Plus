//#include<vector>
//#include<queue>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//
//bool cmp(const std::pair<int, int>& a, const std::pair<int, int>& b) {
//	return a.first > b.first;
//}
//
//int getMinimumStop(int L, int P, vector < pair<int, int>>& stop) {
//	// L Ϊ��㵽�յ�ľ��룬P Ϊ����ʼ����������pair<����վ���յ�ľ���, ����վ������>
//	std::priority_queue<int>Q;  // ��������������
//	int result = 0;  // ��¼�ӹ�������
//	stop.push_back(make_pair(0, 0));
//	sort(stop.begin(), stop.end(), cmp);
//
//	for (int i = 0; i < stop.size(); i++) {
//		int dist = L - stop[i].first;
//		while (!Q.empty() && P < dist) {
//			P += Q.top();
//			Q.pop();
//			result++;
//		}
//		if (Q.empty() && P < dist) {
//			return -1;
//		}
//		P = P - dist;
//		L = stop[i].first;
//		Q.push(stop[i].second);
//	}
//	return result;
//}
//
//int main() {
//	std::vector<pair<int, int>>stop;
//	stop.push_back(make_pair(15, 10));
//	stop.push_back(make_pair(11, 5));
//	stop.push_back(make_pair(4, 4));
//	stop.push_back(make_pair(5, 2));
//	int L = 25;
//	int P = 10;
//
//	cout << "getMinimumStop: " << getMinimumStop(L, P, stop) << endl;
//	system("pause");
//	return 0;
//}