#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    int price;
    float interest;
    string mystr;
    cout << "Enter price"<< endl;
    getline(cin, mystr);
    stringstream(mystr) >> price;
    cout << "Enter interest" << endl;
    getline(cin,mystr);
    stringstream(mystr) >> interest;
    cout << "Price: " << price << endl;
    cout << "Interest: " << interest << endl;
    cout << "Total: " << price*interest << endl;
    return 0;
}