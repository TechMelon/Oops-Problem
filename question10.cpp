// Create a class Student with:
// ● Attributes: name, rollNumber, grades[].
// ● Constructor to initialize the attributes.
// ● Method calculateAverage() to return the average grade.
// ● Display student details and their average grade.

#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollNumber;
    int grades[5];
    int numGrades;
    public:
    Student(string name, int rollNumber);
    void addGrade(int grade);
    void calculateAverage();
    void displayDetail();
};

Student::Student(string name, int rollNumber){
    this -> numGrades = 0;
    this -> name = name;
    this -> rollNumber = rollNumber;
}

void Student::addGrade(int grade){
    if (numGrades < 5)
    {
        grades[numGrades] = grade;
        numGrades++;
    }
    else
    {
        cout << "Can't add more than five grade." << endl;
    }
}

void Student::calculateAverage(){
    if (numGrades == 0)
    {
        cout << "Average is 0" << endl;
    }
    int sum = 0;
    for (int i = 0; i < numGrades ; i++)
    {
        sum += grades[i];
    }
    int avarage = sum / numGrades;
    cout << "Avarage is " << avarage << endl;
}

void Student::displayDetail(){
    cout << "Name is " << name << endl;
    cout << "Roll Number is " << rollNumber << endl;
    cout << "Grade is ";
    for (int i = 0; i < numGrades; i++)
    {
        cout << grades[i] << " ";
    }
    cout << endl;
}

int main(){
    Student s1("sneha", 58);
    s1.addGrade(80);
    s1.addGrade(70);
    s1.addGrade(90);
    s1.addGrade(85);  
    s1.addGrade(75);
    s1.calculateAverage();
    s1.displayDetail();
    return 0;    
}