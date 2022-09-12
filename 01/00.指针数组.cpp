using namespace std;
#include<iostream>
#include<iomanip>

int main(){
    const char *names[2] = {"Jiang", "Yu"};
    cout << names[1] << endl;
    const int arr[3] = {0, 1, 2};
    cout << arr[1] << endl;
    cout << *(arr + 1) << endl;

    return 0;
}