// Create a class Employee with private attributes name, id, and salary. Implement accessors (getters) and mutators (setters) for these attributes. Explain how accessors and mutators are used to control access to private data.
#include<iostream>
using namespace std;
class Employee{
    private:
    int salary,id;
    string name;
    public:
    void setters(int salary,int id,string name);
    void getters();
};

void Employee::setters(int salary,int id,string name){
    this -> salary = salary;
    this -> id = id;
    this -> name = name;
}

void Employee::getters(){
    cout << name << endl;
    cout << salary << endl;
    cout << id << endl;
}

int main(){
    Employee data;
    data.setters(500,12345,"something");
    data.getters();
    return 0;
}