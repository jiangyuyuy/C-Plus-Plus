//#include<iostream>
//#include<fstream>
//using namespace std;
//
//int main() {
//	char data[100];
//	// ��д��ģʽ���ļ�
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
//	// �Զ���ģʽ���ļ�
//	ifstream infile;
//	infile.open("first_file.txt");
//	cout << "OK! Reading from the file." << endl;
//	infile >> data;
//	// ����Ļ��д������
//	cout << "Your name is ";
//	cout << data << endl;
//	infile >> data;
//	cout << "Your age is ";
//	cout << data << endl;
//
//	// �رմ򿪵��ļ�
//	infile.close();
//	system("pause");
//	return 0;
//}