#include<iostream>
using namespace std;
class Dumy{
    public :
        int x;
        Dumy(int a):x(a){};
        bool isitme(const Dumy &object);
        int isitme(const Dumy &object, int y);
};

bool Dumy :: isitme(const Dumy &object){
    if(&object == this) return true;
    return false;
}
int Dumy :: isitme(const Dumy &object, int y){
    if(object.x == this->x){
        return y;
    }
    return 1;
}
int main(){
    Dumy a{10}, b{20};
    cout << a.isitme(a) << endl;
    cout << a.isitme(b) << endl;
    cout << a.isitme(a,10) << endl;
    cout << a.isitme(b,10) << endl;
    return 0;
}