#include<iostream>
using namespace std;

template <class T>

class mypair{
    T a,b;
    public:
        mypair(T x, T y): a(x), b(y){};
        T getMax();
};

template <class T>
T mypair<T>::getMax(){
    return a > b ? a:b;
}

int main(){
    mypair <int> myobject(100,70);
    cout << myobject.getMax() << endl;
}
