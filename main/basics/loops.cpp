#include <iostream>
using namespace std;

int number(int a) {
    if (a % 2 == 0){
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl;
    }
}

int main() {
    for(int i {0}; i < 10; i++)
    {
        number(i);
    }
}