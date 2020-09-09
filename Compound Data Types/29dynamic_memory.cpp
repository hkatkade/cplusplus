#include<iostream>
#include <new>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements : " << endl;
    cin >> n;
    int * arr = new (nothrow) int [n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    delete[] arr;


}