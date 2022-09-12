//#include<string>
//#include<iostream>
//#include<stack>
//using namespace std;
//
//void compute(std::stack<int>& number_stack, std::stack<char>& operator_stack) {
//	if (number_stack.size() < 2) {
//		return;
//	}
//	int num2 = number_stack.top();
//	number_stack.pop();
//	int num1 = number_stack.top();
//	number_stack.pop();
//
//	if (operator_stack.top() == '+') {
//		number_stack.push(num1 + num2);
//	}
//	else if (operator_stack.top() == '-') {
//		number_stack.push(num1 - num2);
//	}
//	operator_stack.pop();
//}
//
//int main() {
//	//int number = 0;
//	//string s = "12345";
//	//for (int i = 0; i < s.length(); i++) {
//	//	number = number * 10 + s[i] - '0';
//	//	// cout << number << " ";
//	//}
//	//cout << "number: " << number << endl;
//
//	
//	system("pause");
//	return 0;
//}