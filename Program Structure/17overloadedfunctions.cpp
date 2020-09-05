#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int add(int a, int b){
    return a + b;
}
int add(int a, float b){
    return a + (int)b;
}
float add(float a, float b){
    return a + b;
}
float add(float a, int b){
    return a + b;
}
int main(){
    int a, b;
    float x, y;
    a = b = 3;
    x = y = 3.142;
    cout << add(a,b) << endl;
    cout << add(a,y) << endl;
    cout << add(x,y) << endl;
    cout << add(x,b) << endl;
}