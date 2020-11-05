
#include "Symetric.h"
#include<iostream>
using namespace std;

    //Algorithms for determining symmetric four-digit numbers.If the nuber is simetric , the result is 1;

void SymetricByWholeDigits() {
    int f;  
    cin >> f;
    int a1 = f / 1000;
    int a2 = f / 100 % 10;
    int a3 = f / 10 % 10;
    int a4 = f % 10;
    int n = (a1 - a4) * (a1 - a4) + (a2 - a3) * (a2 - a3) + 1;
    cout << n;
}
void Symetric9_11() {
    int num;
    std::cin >> num;
    std::cout << num % 11 + num % 1000 / 10 % 11 + 1;
   
}
