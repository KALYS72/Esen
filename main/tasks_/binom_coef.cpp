#include <iostream>
#include <cmath>
using namespace std;

int bin(int a, int b) {
    if (b == 0 || a == b) {
        return 1;
    }

    return bin(a-1, b-1)
}

int main()