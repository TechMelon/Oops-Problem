// What is the this pointer in C++? How is it used within a class? Write a class Rectangle with attributes length and breadth, and use the this pointer to return the current object in a method setDimensions().
#include <iostream>
using namespace std;
class Rectangle{
    private:
    int length,breadth;
    public:
    void setDimensions(int length,int breadth);
    void getDimensions();
}

void Rectangle::setDimensions(int length,int breadth){
    this ->length=length;
    this -> breadth = breadth;
}

void Rectangle::getDimensions(){
    cout << length << endl;
    cout << breadth << endl;
}

int main(){
    Rectangle box;
    box.setDimensions(20,30);
    box.getDimensions();
    return 0;
}