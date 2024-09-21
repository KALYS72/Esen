#include <iostream>
using namespace std;

int main() {
    long double Z = 1.0;
    int n=0;
    while (2*Z>Z) {
        n++;
        Z /= 10;
    }
    std::cout << n;
}
   