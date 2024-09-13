#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

void printFloatBinary(float value) {
    union {
        float f;
        uint32_t u;
    } converter;

    converter.f = value;
    std::bitset<64> bits(converter.u);
    std::cout << bits << std::endl;
}

int main() {
    float result1 = 1.0f - 1.0f; // Математически это 0.0
    float result2 = -0.0f; // Отдельно задаём -0.0

    std::cout << "Result of 1.0 - 1.0 in binary: ";
    printFloatBinary(result1);

    std::cout << "Negative zero (-0.0) in binary: ";
    printFloatBinary(result2);
}