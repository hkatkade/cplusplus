#include<iostream>
#include<string>
using namespace std;

int main(){
    int a,b;
    a = (b=3, b + 5);
    cout << a << endl;
}