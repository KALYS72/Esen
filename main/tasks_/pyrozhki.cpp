#include <iostream>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    int price = (a * 100) + b;
    int curPrice = price * n;
    int newA = curPrice / 100;
    int newB = curPrice % 100;
    cout << newA << " " << newB;
}