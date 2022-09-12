//#include<iostream>
//#include<csignal>
//#include<Windows.h>
//
//using namespace std;
//void signalHandle(int signum) {
//	cout << "Interrupt signal (" << signum << ") received.\n";
//	exit(signum);
//}
//
//int main() {
//	signal(SIGINT, signalHandle);
//	int i = 1;
//	while (i > 0) {
//		cout << "Going to sleep " << i << " times..." << endl;
//		i++;
//		Sleep(1000);  
//		// ms Îªµ¥Î»
//	}
//}