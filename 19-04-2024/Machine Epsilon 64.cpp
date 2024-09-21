#include <iostream>
using namespace std;

int main() {
    long double E = 1.0;
    int n=0;
    while (E+1>1) {
        n++;
        E /= 10;
    }
    cout << n;
}