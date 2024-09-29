#include <iostream>
#include <cmath>
using namespace std;

int fhi(int a)
{
    int num1 = 0;
    int num2 = 0;
    for (int i = 0; i <= a; i++) {
        if (num1 == 0)
            num1 = 1;
        else if (num2 == 0)
            num2 = 1;
        else if (i % 2 != 0)
            num2 += num1;
        else if (i % 2 == 0)
            num1 += num2;
    }
    if (a % 2 == 0) {
        return num1;
    }
    else {
        return num2;
    }
}

int main()
{
    int a;
    cin >> a;
    cout << fhi(a);
}