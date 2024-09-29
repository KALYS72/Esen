#include <iostream>
using namespace std;

int main() {
    int lessons;
    cin >> lessons;
    int hours = 9;
    int mins = 0;
    int lesson = 45;    
    int break1 = 5;
    int break2 = 15;
    mins = (lessons * lesson) + ((lessons/2)*5 + ((lessons-1)/2)*15);
    hours += mins / 60;
    mins %= 60;
    cout << hours << " " << mins;
}