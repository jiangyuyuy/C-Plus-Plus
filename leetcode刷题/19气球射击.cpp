//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//
//bool cmp(const std::pair<int, int>& a, const std::pair<int, int>& b) {
//	return a.first < b.first;
//}
//
//class Solution {
//public:
//	int findMinArrowShots(std::vector<std::pair<int,int>>&points) {
//		if (points.size() == 0) {
//			return 0;
//		}
//		std::sort(points.begin(), points.end(), cmp);
//		// 将气球按照左端点从小到大排序
//		int shoot_num = 1;  // 弓箭手数量初始化为1
//		int shoot_begin = points[0].first;
//		int shoot_end = points[0].second;  // 初始化射击区间，即为第一个气球的两端点
//		
//		for (int i = 1; i < points.size(); i++) {
//			if (points[i].first <= shoot_end) {
//				shoot_begin = points[i].first;
//				if (shoot_end > points[i].second) {
//					shoot_end = points[i].second;
//				}
//			}
//			else {
//				shoot_num++;
//				shoot_begin = points[i].first;
//				shoot_end = points[i].second;
//			}
//		}
//		return shoot_num;
//
//	}
//};
//
//int main() {
//	Solution solve;
//	vector<std::pair<int, int>>points;
//	points.push_back(std::make_pair(10, 16));
//	points.push_back(std::make_pair(2, 8));
//	points.push_back(std::make_pair(1, 6));
//	points.push_back(std::make_pair(7, 12));
//	points.push_back(std::make_pair(-1, 0));
//	cout << "ShootCount: " << solve.findMinArrowShots(points) << endl;
//	system("pause");
//	return 0;
//}