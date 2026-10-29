#include<iostream>
using namespace std;
class shape{
    public:
    virtual float area()=0;
};
class Circle:public shape{
    private:
        float radius;
    public:
        Circle(float r){
            radius=r;
        }
        float area(){
            return 3.14*radius*radius;
        }
};
class Rectangle:public shape{
    private:
    float length,breadth;
    public:
    Rectangle(float l,float b){
        length=l;
        breadth=b;
    }
    float area(){
        return length*breadth;
    }
};
class Triangle:public shape{
    private:
    float base,height;
    public:
    Triangle(float b,float h){
        base=b;
        height=h;
    }
    float area(){
        return 0.5*base*height;
    }
};
int main() {
    float radius, length, breadth, base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;

    Circle c(radius);
    Rectangle r(length, breadth);
    Triangle t(base, height);

    shape *ptr;

    ptr = &c;
    cout << "Area of Circle: " << ptr->area() << endl;

    ptr = &r;
    cout << "Area of Rectangle: " << ptr->area() << endl;

    ptr = &t;
    cout << "Area of Triangle: " << ptr->area() << endl;

    return 0;
}
