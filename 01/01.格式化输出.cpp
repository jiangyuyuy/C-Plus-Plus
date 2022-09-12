using namespace std;
#include<iostream>
#include<iomanip>

int main(){

    int hour = 5;
    int minute = 30;
    int second = 10;
    cout << setw(2) << setfill('0') << hour << ":"
         << setw(2) << minute << ":"
         << setw(2) << second << endl;

    float six = 123456;
    float three = 12.3;
    float mini = 0.123123;
    cout << setw(10) << setfill('*') << six <<endl 
         << setw(10) << three <<endl
         << setw(10) << mini << endl;

    /*
    05:30:10
    ****123456
    ******12.3
    **0.123123
    */

   // 保留小数
    float big = 12345;
    cout << big << " After " << setprecision(4) << big << endl;

    float middle = 1.234;	
    cout << middle <<" after " << setprecision(2) << middle << endl;

    float mini_ = 0.12345;
    cout << mini_ <<" after " << setprecision(4) << mini_ << endl;

    return 0;
}