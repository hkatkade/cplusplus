#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void print(int arr[]){
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
    cout << endl;
}
void print2(int *arr){
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
    cout << endl;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int arr2[5] = {1,2,3}; // {1, 2, 3, 0, 0}
    int arr3[5] = {}; // {0,0,0,0,0}
    print(arr);
    print(arr2);
    print(arr3);
    print2(arr);
    print2(arr2);
    print2(arr3);
}