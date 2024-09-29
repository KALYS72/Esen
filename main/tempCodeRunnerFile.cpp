#include <iostream>
using namespace std;

long long haha(int i, long long flov = 0)
{
    if (i == 0) {
        return flov;
    }
    else {
        flov += (i % 10);
        return haha(i / 10, flov);
    }
}

int main()
{
    int i;
    cin >> i;
    cout << haha(i);
}
