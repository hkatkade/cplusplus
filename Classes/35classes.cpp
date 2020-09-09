#include<iostream>
using namespace std;
class Rectangle{
    int width, height;
    public:
        void setValues(int,int);
        int area() {return width*height;}
};

void Rectangle::setValues(int x, int y){
    width = x;
    height = y;
}
int main(){
    Rectangle rect;
    rect.setValues(4,5);
    cout << "Area: " << rect.area() << endl;
    return 0;
}
