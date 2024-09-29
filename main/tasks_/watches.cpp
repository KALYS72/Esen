#include<iostream>
using namespace std;
int main(){
    int sec, min, left_sec, h;
    cin>>sec;
    left_sec=sec%60;
    min=sec/60;
    h=min/60;
    h%=24;
    min%=60;
    // Kostili vnizu, ne obrashaite vnimaniye :)
    if (left_sec<=9 and min<=9)
    {
        cout<<h<<":"<<0<<min<<":"<<0<<left_sec;
    }
    else if(min<=9){
        cout<<h<<":"<<0<<min<<":"<<left_sec;
    }
    else if (left_sec<=9){
        cout<<h<<":"<<min<<":"<<0<<left_sec;
    }
    else {
        cout<<h<<":"<<min<<":"<<left_sec;
    }
    
    
    return 0;
}