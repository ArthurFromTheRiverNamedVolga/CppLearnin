#include <iostream>
using namespace std;

void ClockByPrintF()
{
    int n, h, m, s;
    cin >> n;
    h = n / 60 / 60 % 24;
    m = n / 60 % 60;
    s = n % 60;
    printf("%d:%0.2d:%0.2d", h, m, s);

}

void ClockByElementaryArithmetic() {
    int n ;
    cin >> n;
    cout << n / 3600 % 24 << ":" << n % 3600 / 600 << n / 60 % 10 << ":" << n % 60 / 10 << n % 10;
}
