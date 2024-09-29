#include <iostream>
using namespace std;

void myMin(int a,int b,int c,int d) {
    int res;
    if (a <= b && a <= c && a <= d) {
        res = a;
    }
    else if (b <= a && b <= c && b <= d) {
        res = b;
    }
    else if (c <= a && c <= b && c <= d) {
        res = c;
    }
    else {
        res = d;
    }
    cout << res;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    myMin(a,b,c,d);
}