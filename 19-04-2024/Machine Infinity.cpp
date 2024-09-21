#include <iostream>
using namespace std;

int main() {
    double I = 1.0;
    int n=0;
    while (2*I>I) {
        n++;
        I *= 10;
    }
    std::cout << n;
}