#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b = a % 10; 
    int c = (a / 10) % 10; 
    int d = (a / 100);
    cout << (b + c + d);
}