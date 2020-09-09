#include<iostream>
using namespace std;
class Dummy{
    public :
        static int count;
        Dummy(){count++;};
};
int Dummy::count = 0;
int main(){
    Dummy d1{},d2{},d3{},d4{};
    cout << Dummy::count << endl;
    return 0;
}