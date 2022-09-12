//#include<iostream>
//#include<string>
//using namespace std;
//
//struct Book {
//	string name;
//	double price;
//	int book_id;
//};
//
//
//// 结构体作函数参数
//void printBook(Book book) {
//	cout << "book_id: " << book.book_id << endl;
//	cout << "book_name: " << book.name << endl;
//	cout << "book_price: " << book.price << endl;
//}
//
//// 指向结构体的指针
//void printBook1(Book* book) {
//	cout << "book_id: " << book->book_id << endl;
//	cout << "book_name: " << book->name << endl;
//	cout << "book_price: " << book->price << endl;
//}
//
//typedef int I;
//typedef struct {
//	I age;
//	string name;
//}Person;
//
//int main() {
//	Book book;
//	book.book_id = 1;
//	book.name = "C++";
//	book.price = 52.0;
//	printBook(book);
//	cout << endl;
//	printBook1(&book);
//	cout << endl;
//
//	Person XiaoMing;
//	XiaoMing.age = 18;
//	XiaoMing.name = "XiaoMing";
//	cout << "Age: " << XiaoMing.age << endl;
//	cout << "Name: " << XiaoMing.name << endl;
//	return 0;
//}