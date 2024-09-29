#include <iostream>
#include <list>
using namespace std;
int main() {
    long double num;
    bool zero = false;
    int n, negative;
    cout << "Insert your number: ";
    cin >> num;
    cout << "\nInsert your N: ";
    cin >> n;
    list<int> res_d;
    list<int> res_f;
    if (num > 0) {
        negative = 0;
    }
    else {
        negative = 1;
        num *= -1;
    }
    int digits = num;
    num -= digits;
    if (digits == 0) {
        res_d.push_front(0);   
    }
    else {  
        while(digits > 0) {
            if ((digits / 2) * 2 == digits) {
                res_d.push_back(0);
            }
            else {
                res_d.push_back(1);
            }   
            digits /= 2;
        };
    }
    while((n > 0 and num != 0) or zero) {
        num *= 2;
        if (num >= 1) {
            res_f.push_back(1);
            num--;
            zero = false;
        }
        else {
            res_f.push_back(0);
            zero = true;
        }
        n--;
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
