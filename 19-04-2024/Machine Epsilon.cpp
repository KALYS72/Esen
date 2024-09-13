#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double E = 1.0f, last_number;
    while (true) {
      if (E+1!=1) {
        last_number = E;
        E /= 2;
      }
      else {
        break;
      }
      
    }
    if (last_number + 0 == 0) {
      cout << "That does not work" << endl; // check if it works
    }
    cout << "Machine Epsilon: " << setprecision(15) << last_number;
}