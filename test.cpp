#include <iostream>
using namespace std;
int main(){
    set <int> arr;
    int sizeChange=0;
    double val=0.45;
    arr.insert(val);
    while(true){
        val=val*2;
        if(val>1)
            val--;
        arr.insert(val)
        sizeChange++;
        if(arr.size<sizeChange)
            break;
    }
}