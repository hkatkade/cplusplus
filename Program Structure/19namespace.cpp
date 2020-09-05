#include<iostream>
#include<string>
#include<sstream>
using namespace std;
namespace MyNameSpace{
    int var = 5;
    int value(){
        return var;
    }
}
namespace AnotherNameSpace{
    float var = 7.01;
    float  value(){
        return var;
    }
}
int main(){
    cout << MyNameSpace::var << endl;
    cout << MyNameSpace::value() << endl;
    cout << AnotherNameSpace::var << endl;
    cout << AnotherNameSpace::value() << endl;
    
}