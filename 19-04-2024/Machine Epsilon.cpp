#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    float E = 1.0, last_number, Epsilon = std::numeric_limits<float>::epsilon();
    while (true) {
        if (E+1>1) {
        last_number = E;
        E /= 2;
    }
    else {
        break;
    }

    }
    if (last_number != Epsilon) {
        cout << "That does not work"; // if it works then it is comparable 
    }
    else {
        cout << "Machine Epsilon: " << setprecision(15) << last_number;
    }
}