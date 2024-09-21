#include <iostream>
#include <list>
using namespace std;
int main(){
    double long num;
    int n;
    cout << "Insert your number: ";
    cin >> num;
    cout << "\nInsert your N: ";
    cin >> n;
    int digits = num, negative;
    if (num > 0) {
        negative = 0;
        while (num >= 1) {
            num--;
        }
    }
    {
        negative = 1;
        num *= -1;
        digits*= -1;
        while (num >= 1) {
            num--;
        }
    }
    list<int> res_d;
    list<int> res_f;
    while(n > 0 or num == 0) {
        num *= 2;
        if (num > 1) {
            res_f.push_front(1);
            num--;
        }
        else {
            res_f.push_front(0);
        }
        n--;
    }
    while(digits > 0) {
        int leftover = digits / 2;
        if (leftover * 2 == digits) {
            res_d.push_front(0);
        }
        else {
            res_d.push_front(1);
        }
    }
    cout << "Negative: " << negative << "\nDigits: ";
    for (int i: res_d) {
        cout << i;
    };
    cout << "\nFloats: "; 
    for (int i: res_f) {
        cout << i;
    };
}