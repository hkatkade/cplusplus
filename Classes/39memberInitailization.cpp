#include<iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
        Rectangle(int x, int y) : width(x), height(y){}
        int area(){ return width*height; }
};
int main(){
    Rectangle r{9,10};
    cout << r.area() << endl;
    return 0;
}