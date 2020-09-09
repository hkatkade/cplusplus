#include<iostream>
using namespace std;
class Circle{
    double radius;
    public:
        Circle(double r){radius = r;}
        double getArea(){ return 3.14*radius*radius; }
};

int main(){
    Circle c1 {5.0};
    Circle c2 = 6.0;
    Circle c3 (7.0);
    cout << "c1: " << c1.getArea() << endl;
    cout << "c2: " << c2.getArea() << endl;
    cout << "c3: " << c3.getArea() << endl;
    return 0;
}