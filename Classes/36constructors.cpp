#include<iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
        Rectangle(int,int);
        int area(){
            return width*height;
        }
};
Rectangle::Rectangle(int a, int b){
    width = a;
    height = b;
}

int main(){
    Rectangle recta(3,4),rectb(5,6);
    cout << "Reacta :" << recta.area() << endl;
    cout << "Reactb :" << rectb.area() << endl;
    return 0;
}