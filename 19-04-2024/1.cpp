#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i = 1, n = 0; 
    long double epsilon = 1; 
    do {
        n++;
        epsilon/10;
    } (i+epsilon!=1);
    cout << n;
}