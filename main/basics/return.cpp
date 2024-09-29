#include <iostream>
using namespace std;

int return7(){
    return 7;
}

int getValue() {
    int a;
    cout << "enter an integer: ";
    cin >> a;
    return a;
}

int main(){
    cout << return7() + getValue();
}