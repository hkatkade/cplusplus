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
    Rectangle * r1, *r2, * r3;
    r1 = &r;
    r2 = new Rectangle {10,20};
    r3 = new Rectangle[2] {{10,20},{30,40}};

    cout << r.area() << endl;
    cout << r1->area() << endl;
    cout << r2->area() << endl;
    cout << r3[0].area() << endl;
    cout << r3[1].area() << endl;
    delete r2;
    delete[] r3;
    return 0;
}