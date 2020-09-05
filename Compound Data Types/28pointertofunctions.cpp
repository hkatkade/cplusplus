#include<iostream>

using namespace std;
int add(int x,int y){
    return x + y;
}
int sub(int x, int y){
    return x - y;
}
int operation(int x,int y,int (*functocall)(int, int)){
    int g;
    g = (*functocall)(x,y);
    return g;
}

int main(){
    int m,n;
    int (*minus)(int, int) = sub;
    m = 10;
    n = 20;
    cout << operation(m,n, add) << endl;
    cout << minus(m,n) << endl;
    return 0;
}