#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    long double Z = 1.0, last_number, Zero = std::numeric_limits<long double>::denorm_min();;
    while (true) {
		if (2*Z>Z) {
			last_number = Z;
			Z /= 2;
		}	
		else {
			break;
		}
      
    }
    if (last_number != Zero) {
      	cout << "That does not work"; // check if it works
    }
	else {
    	cout << "Machine Zero: " << setprecision(15) << last_number;
	}
}