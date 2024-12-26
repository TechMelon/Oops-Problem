// Write a class Point that represents a point in 2D space with x and y coordinates. Implement a default constructor, a parameterized constructor, and a copy constructor. How does the copy constructor differ from the default constructor?
#include<iostream>
using namespace std;
class Point{
    private:
    int x,y;
    public:
    Point();
    Point(int x,int y);
    Point(Point &p);
    void getPoints();
};

Point::Point(){
    x = 0;
    y = 0;
}

Point::Point(int x,int y){
    this -> x = x;
    this -> y = y;
}

void Point::getPoints(){
    cout << x << endl << y << endl;
}

Point::Point(Point &p){
    this -> x = p.x;
    this -> y = p.y;
}

int main(){
    Point p1;
    p1.getPoints();
    Point p2(5,5);
    p2.getPoints();
    Point p3(p2);
    p3.getPoints();
    return 0;
}