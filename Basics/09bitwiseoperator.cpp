#include<iostream>
#include<string>
using namespace std;

int main(){
    int a, b, c;
    a = b = c = 10;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << ~a << endl;
    a <<= 2; 
    cout << a << endl;
    cout << a<<2 << endl;
    b >>= 1;
    cout << b << endl;

    return 0; 
}