#include<iostream>
using namespace std;

int main(){
    int * p1, * p2;
    int first, second;
    p1 = &first;
    p2 = &second;
    *p1 = 10;
    *p2 = 20;
    p1 = p2;
    *p1 = 30;
    cout << "first : " << first << endl;
    cout << "Second : " << second << endl;
    return 0;
}