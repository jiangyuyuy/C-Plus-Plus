#include <iostream>

template <typename J>
void Swap(J& a, J& b);

int main()
{
	using namespace std;
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << endl;
	cout << "Using compiler-generated int swapper: " << endl;
	Swap(i, j);
	cout << "Now i, j = " << i << ", " << j << endl;

	double i = 24.5;
	double j = 54.2;
	cout << "i, j = " << i << ", " << j << endl;
	cout << "Using compiler-generated int swapper: " << endl;
	Swap(i, j);
	cout << "Now i, j = " << i << ", " << j << endl;
	system("Pause");
	return 0;
}

template <typename J>
void Swap(J& a, J& b)
{
	J temp;
	temp = a;
	a = b;
	b = temp;
}