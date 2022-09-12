#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;
    outFile.open("outfile.txt");

    cout << "Enter the make the model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = a_price * 0.913;

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Was asking $" << d_price << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Year: " << year << endl;
    outFile << "Now asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;
    outFile.close();

    system("pause");
    return 0;
}