#include<iostream>
using namespace std;

int main(){
    int * ptr;
    int arr[5];
    ptr = arr;
    *ptr = 10;
    ptr++;
    *ptr = 20;
    ptr++;
    *ptr = 20;
    ptr++;
    *ptr = 20;
    ptr++;
    *ptr = 20;
    for(int i = 0; i < 5; i++)
        cout << arr[i] << endl;
    return 0;
}