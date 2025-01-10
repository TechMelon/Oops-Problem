// Create a class Product with the following:
// ● Attributes: name, price, quantity.
// ● Constructor Overloading:
// ○ Default constructor initializes name to "Unknown", price to 0, and
// quantity to 0.
// ○ Parameterized constructor accepts values for name, price, and
// quantity.
// ● Validate that price and quantity cannot be negative. If invalid, set them to
// zero.
// ● Write a method displayDetails() to print product details.

#include<iostream>
using namespace std;

class Product{
    private:
    string name;
    int price;
    int quantity;
    public:
    Product();
    Product(string name, int price, int quantity);
    int setPrice(int price);
    int setQuantity(int quantity);
    int getPrice();
    int getQuantity();
    string setName(string name);
    string getName();
    void displayDetails();
};

void Product::displayDetails(){
    cout << "Name is " << name << endl;
    cout << "Price is " << price << endl;
    cout << "quantity is " << quantity << endl;
}

Product::Product(){
    name = "Unknown";
    price = 0;
    quantity = 0;
}

Product::Product(string name, int price, int quantity){
    this -> name = name;
    this -> price = price;
    this -> quantity = quantity;
}

int Product::setPrice(int price){
    price>=0 ? this -> 
    price = price : price = 0;
}

int Product::setQuantity(int quantity){
    quantity>=0 ? this -> quantity = quantity : quantity = 0;
}

string Product::setName(string name){
    name>="" ? this -> name = name : name = "Unknown";
}

string Product::getName(){
    return name;
}

int Product::getPrice(){
    return price;
}

int Product::getQuantity(){
    return quantity;
}

int main(){
    int price1, quantity1;
    string name1;
    cin >> name1;
    cin >> quantity1;
    cin >> price1;
    Product details;
    Product detail1(name1, price1, quantity1);
    cout << details.getPrice() << endl;
    cout << details.getQuantity() << endl;
    cout << details.getName() << endl;
    detail1.displayDetails();
    return 0;
}