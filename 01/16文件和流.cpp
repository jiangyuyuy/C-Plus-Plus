//#include<iostream>
//#include<fstream>
//using namespace std;
//
//int main() {
//	char data[100];
//	// 以写的模式打开文件
//	ofstream outfile;
//	outfile.open("first_file.txt");
//
//	cout << "Writing to the file." << endl;
//	cout << "Enter your name: ";
//	cin.getline(data, 100);
//	outfile << "Your Name: ";
//	outfile << data << endl;
//	
//	cout << "Enter your age: ";
//	cin >> data;
//	cin.ignore();
//
//	outfile << "Your Age: ";
//	outfile << data << endl;
//
//	outfile.close();
//
//	// 以读的模式打开文件
//	ifstream infile;
//	infile.open("first_file.txt");
//	cout << "OK! Reading from the file." << endl;
//	infile >> data;
//	// 在屏幕上写入数据
//	cout << "Your name is ";
//	cout << data << endl;
//	infile >> data;
//	cout << "Your age is ";
//	cout << data << endl;
//
//	// 关闭打开的文件
//	infile.close();
//	system("pause");
//	return 0;
//}