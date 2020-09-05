#include<iostream>
#include<string>
#include<sstream>
using namespace std;
template <class T, class U>

U sum(T a, U b){
    return a + b;
}

int main(){
    int a,b;
    float x = 1.1;
    a = b = 10;
    cout << sum(a,x) << endl;
    cout << sum<int, float>(a,x) << endl;
}