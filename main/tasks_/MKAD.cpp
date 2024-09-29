#include <iostream>
using namespace std;

int main() {
    int S = 109;
    int V, t;
    cin >> V >> t;
    if (V > 0) {
        cout << (V * t) - S;
    }   
    else if (V < 0) {
        cout << (V * t) + S;
    }
    else {
        cout << S;
    }
}