#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand( static_cast<unsigned int>(time(NULL)));

    // Generate and print a random number between 1 and 100
    int randomNumber = rand() % 3 + 1;
    cout << "Random number: " << randomNumber << endl;

    return 0;
}
// C:\Program Files (x86)\Dev-Cpp\MinGW64\bin