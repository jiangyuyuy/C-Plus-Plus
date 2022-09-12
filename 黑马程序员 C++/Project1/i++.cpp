#include <iostream>
int i_1();
int main()
{
	using namespace std;
	int j = i_1();
	cout << j << endl;  //5
	system("pause");
	return 0;
}

int i_1()
{
	int i;
	for (i = 0; i < 5; i++)
		std::cout << "i = " << i << std::endl;
	return i; // 5
}