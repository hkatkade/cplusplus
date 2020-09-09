#include<iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
        Rectangle(int,int);
        Rectangle();
        int area(){
            return width*height;
        }
};
Rectangle::Rectangle(){
    width = 0;
    height = 0;
}
Rectangle::Rectangle(int a, int b){
    width = a;
    height = b;
}

int main(){
    Rectangle recta(3,4),rectb;
    cout << "Reacta :" << recta.area() << endl;
    cout << "Reactb :" << rectb.area() << endl;
    return 0;
}