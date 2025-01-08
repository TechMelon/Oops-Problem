// 1. Design a class Employee with constructors to:
// ● Accept employee details (name, id, salary).
// ● Copy employee data from another object.
// Implement a method to calculate and display an annual bonus.

#include<iostream>
using namespace std;

class Employee{
    private:
    int id;
    double salary;
    string name;
    public:
    Employee(int id, double salary, string name);
    Employee(Employee &profile);
    void getEmployee();
    double calculateAnnualBonus();
};

double Employee::calculateAnnualBonus(){
    return this -> salary * 12 * 0.20;
}

void Employee::getEmployee(){
    cout << "Id = " << id << endl;
    cout << "Salary = " << salary << endl;
    cout << "Name = " << name << endl;
}

Employee::Employee(int id, double salary, string name){
    this -> id = id;
    this -> salary = salary;
    this -> name = name;
}

Employee::Employee(Employee &profile){
    id = profile.id;
    salary = profile.salary;
    name = profile.name;
}

int main(){
    Employee E1(12345, 3000000000000, "sneha");
    Employee E2(E1);
    // E2.getEmployee();
    E1.getEmployee();
    cout << "Annual bonus = " << E1.calculateAnnualBonus();
    return 0;
}