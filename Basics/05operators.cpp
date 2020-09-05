#include<iostream>
#include<string>
using namespace std;

int main(){
    int a{0}, b{0};
    a = 7 + (b=9);
    cout << a << " " << b << endl;
    int x,y,z;
    x = y = z = 10;
    cout << x << " " << y << " " << z << endl;
    
    return 0;
}