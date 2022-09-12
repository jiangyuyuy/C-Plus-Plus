#include<vector>
#include<iostream>
using namespace std;
#include<algorithm>
#include<string>

class Solution {
public:
	vector<vector<int>> subsets(vector<int>& nums) {
		vector<vector<int>>result;
		vector<int>item;
		result.push_back(item);
		generate(0, nums, item, result);
		return result;
	}
	void generate(int i, 
				  vector<int>& nums,
		          vector<int>& item, 
		          vector<vector<int>>& result) {
		if (i >= nums.size()) {
			return;
		}
		item.push_back(nums[i]);
		result.push_back(item);
		generate(i + 1, nums, item, result);
		item.pop_back();
		generate(i + 1, nums, item, result);
	}
};

int main() {
	vector<int>nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	Solution solve;
	vector<vector<int>> result = solve.subsets(nums);
	for (int i = 0; i < result.size(); i++) {
		for (int j = 0; j < result[i].size(); j++) {
			cout << "[" << result[i][j] << "]" << " ";
		}
		cout << endl;
	}
	cout << endl;
    cout << "Hello C++" << endl;
	system("pause");
	return 0;
}