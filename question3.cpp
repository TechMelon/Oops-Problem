// Modify the Rectangle class to include a method compareArea() that takes another Rectangle object as an argument and uses the this pointer to compare the area of the current object with the passed object.
#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length,breadth;
    public:
    Rectangle(int l,int b);
    int area();
    int compareArea(Rectangle &rect);
};
Rectangle::Rectangle(int l,int b){
    length = l;
    breadth = b;
}

int Rectangle::area(){
    return length*breadth;
}

int Rectangle::compareArea(Rectangle &rect){
    int thisArea = this -> area(); //box1.area()
    int otherArea = rect.area(); //box2.area()
    if (thisArea>otherArea)
    {
        return 1;
    }else if(otherArea>thisArea){
        return -1;
    }else{
        return 0;
    }
}

int main(){
    Rectangle box1(50,50);
    Rectangle box2(30,50);
    int result = box1.compareArea(box2);
    if (result > 0) {
        cout << "Rectangle 1 has a larger area than Rectangle 2." << endl;
    } else if (result < 0) {
        cout << "Rectangle 1 has a smaller area than Rectangle 2." << endl;
    } else {
        cout << "Rectangle 1 and Rectangle 2 have the same area." << endl;
    }
return 0;
}