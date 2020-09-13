#include<iostream>
using namespace std;

class MyClass{
    public:
        int x; // x cannot be modified can only be initialzed by the constructor
        MyClass(int a): x(a){};
        int get() const {return x+10;} // can be accessed by const objects 
        int getx() { return x+10; } // cannot be accessed by const objects 
};

int main(){
    const MyClass a{20};
    cout << a.x << endl;
    cout << a.get() << endl;
    return 0;
}