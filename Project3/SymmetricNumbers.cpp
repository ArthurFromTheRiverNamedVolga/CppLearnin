#include <iostream>
using namespace std;
void main3() {
    setlocale(LC_ALL, "Ru");
    //алгоритмы определения симметричных чисел :в случае симметрии выводят '1' .
}
void main1() {
    int f;  
    cin >> f;
    int a1 = f / 1000;
    int a2 = f / 100 % 10;
    int a3 = f / 10 % 10;
    int a4 = f % 10;
    int n = (a1 - a4) * (a1 - a4) + (a2 - a3) * (a2 - a3) + 1;
    cout << n;
}
int main2() {
    int num;
    std::cin >> num;
    std::cout << num % 11 + num % 1000 / 10 % 11 + 1;
    return 0;
}
void main() {
    int a;
    cout << "a";
    switch (a) {
    case 1: void main1();
        break;
    case 2: void main2();
        break;
    }
}