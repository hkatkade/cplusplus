#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){
    string str {"Hello world"};
    int n = str.length();
    int i = 0;
    cout << "While Loop" << endl;
    while(i < n){
        cout << i << " " << str[i] << endl;
        i++;
    }
    cout << "Do while Loop" << endl;
    i = 0;
    do{
        cout << i << " " << str[i] << endl;
        i++;
    }while(i != n);
    cout << "For Loop " << endl;
    for(i=0;i<n;i++){
        cout << i << " " << str[i] << endl;
    }
    cout << "Range based loop" << endl;
    // for(char c:str){
    //     cout << c << endl;
    // }
    for(auto c:str){
        cout << c << endl;
    }



    return 0;
}