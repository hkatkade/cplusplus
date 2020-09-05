#include<iostream>
using namespace std;
int main(){
    int a;
    int * b;
    int ** c;
    a = 10;
    b = &a;
    c = &b;
    **c = 20;
    cout << a << endl;
    return 0;
}