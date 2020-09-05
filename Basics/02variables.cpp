/*
Types of primitive data types:
char, int, bool, void , float
long , long long, double, long double
*/
#include<iostream>
using namespace std;

int main(){
    int a{0}, b(0),c = 0; // Give initial value of 0 
    c = 5;
    a = 5;
    b = 5;
    c += a + b;
    cout << c << endl;

    int foo = 0;
    auto bar = foo;  // the same as: int bar = foo;
    decltype(foo) k;  // the same as: int k;
    return 0;
}