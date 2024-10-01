#include <iostream>
#include <list>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    float a, b, res=0, x=0;
    int n;
    cout << "A, B, N: ";
    cin >> a >> b >> n;
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < n; i++) {
        time_t times = time(0);
        float seconds = static_cast<float>(times);
        seconds += rand()%99;
        seconds *= 39;
        seconds = fmod(seconds, (b-a));
        float j = a + seconds;
        res += sin(j) * (b - a);
        x++;
    }
    cout << "result: " << res/x;
}