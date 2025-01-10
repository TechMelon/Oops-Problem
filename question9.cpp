// Create a class Circle with:
// ● Attribute: radius.
// ● Constructor to initialize radius dynamically.
// ● Method calculateArea() to calculate and return the area.

#include<iostream>
using namespace std;

class Circle{
    private:
    float radius;
    float area;
    public:
    float calculateArea();
    Circle(float radius);
};

Circle::Circle(float radius){
    this -> radius = radius;
}

float Circle::calculateArea(){
    float pi = 3.14;
    return area = pi * radius * radius;
}

int main(){
    Circle r(20);
    float area = r.calculateArea();
    cout << "Area of a circle is " << area ;
    return 0;
}