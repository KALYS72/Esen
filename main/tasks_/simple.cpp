#include <iostream>
#include<cmath>
using namespace std;

string primo(int a) {
    if(a<=1){ 
    return "composite";
    }
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            return "composite";
        }
    }
    return "prime";
}

int main() {
    int a;
    cin >> a;
    cout << primo(a);
}