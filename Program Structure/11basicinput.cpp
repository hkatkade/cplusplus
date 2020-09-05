#include<iostream>
#include<string>
using namespace std;

int main(){
    // int age;
    // cout << "Enter your age\n";
    // cin >> age;
    // cout << "Your age is " << age << endl;
    string name;
    // cout << "Enter your name " << endl;
    // cin >> name;
    // cout << "Your name is " << name << endl;
    cout << "Enter your full name " << endl;
    getline(cin, name);
    cout << name << endl;
    return 0;
}