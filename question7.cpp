// Create a class Book with attributes title, author, and price.
// Implement:
// ● A parameterized constructor.
// ● A copy constructor.
// Display book details using a method.

#include<iostream>
using namespace std;

class Book{
    private:
    string title;
    string author;
    int price;
    public:
    Book(string title, string author, int price);
    Book(Book &b);
    void getBook();
};

void Book::getBook(){
    cout << "Title = " << title << endl;
    cout << "Author = " << author << endl;
    cout << "Price = " << price << endl;
}

Book::Book(string title, string author, int price){
    this -> title = title;
    this -> author = author;
    this -> price = price;
}

Book::Book(Book &b){
    title = b.title;
    author = b.author;
    price = b.price;
}

int main(){
    Book b1("Power Of Mind","Swami Vivekananda",200);
    Book b2(b1);
    b1.getBook();
    return 0;
}