#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    long double I = 1.0, last_number, Infinity = std::numeric_limits<long double>::infinity();;
    while (true) {
		if (2*I>I) {
			last_number = I;
			I *= 2;
		}	
		else {
			break;
		}
      
    }
    if (I != Infinity) {
        cout << "That does not work"; // check if it works
    } else {
        cout << "Machine Infinity: " << I;
    }
}