#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    void setLength(int l);
    void setBreadth(int b);
    int getLength();
    int getBreadth();
    int area();
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &rect3);
};

Rectangle::Rectangle(Rectangle &rect3){
    length = rect3.length;
    breadth = rect3.breadth;
}

Rectangle::Rectangle(){
    length = 0;
    breadth = 0;
}

Rectangle::Rectangle(int l,int b){
    l>=0?length = l : length = 0;
    b>=0?breadth = b : breadth = 0;
}

int Rectangle::area(){
    return length * breadth;
}

void Rectangle::setLength(int l){
    l>=0?length = l:length = 0;
}

void Rectangle::setBreadth(int b){
    b>=0?breadth = b : breadth = 0;
}

int Rectangle::getLength(){
    return length;
}

int Rectangle::getBreadth(){
    return breadth;
}

int main(){
    Rectangle rect;
    // rect.setLength(20);
    // rect.setBreadth(10);
    Rectangle rect2(20,30);
    Rectangle rect3(rect2);
    cout<< "Length is " << rect.getLength() << endl;
    cout << "Breadth is " << rect.getBreadth() << endl;
    cout << "Area is " << rect.area() << endl;
    cout<< "Length of rect2 is " << rect2.getLength() << endl;
    cout << "Breadth of rect2 is " << rect2.getBreadth() << endl;
    cout << "Area of rect2 is " << rect2.area() << endl;
    cout<< "Length of rect3 is " << rect3.getLength() << endl;
    cout << "Breadth of rect3 is " << rect3.getBreadth() << endl;
    // cout << "Area of rect2 is " << rect2.area() << endl;
    return 0;
}