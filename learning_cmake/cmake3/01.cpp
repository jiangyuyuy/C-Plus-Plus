#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

// jie gou ti pai xu
struct node{
	int a, b;
	bool operator < (const node& _node)const{
		if(a != _node.a){
			return a < _node.a;
		}
		else{
			b < _node.b;
		}
	}
};

int main(){
	double num = 3.14159;
	printf("%.2f", num);
	cout << endl;

	string s(10, 'a');
	cout << "s: " << s << endl;

	vector<node>v;
	v.push_back({6,2});
	v.push_back({4,3});
	sort(v.begin(), v.end());
	for(auto &node: v){
		cout << node.a << " " << node.b << endl;
	}
	cout << "------" << endl;

	priority_queue<node>q;
	q.push({1,4});
	q.push({1,9});
	q.push({6,2});
	q.push({4,3});
	while(!q.empty()){
		cout << q.top().a << " " << q.top().b << endl;
		q.pop();
	}

	cout << endl;
	return 0;
}