#include<iostream>
using namespace std;

class Employee{
private:
    int id;
    string name;
    int salary; //float
    // age, dept.

    public:
    /*
        types of constructors-:
        1. Default constructor, non parameterized constructor
        2. Parameterized constructor
    */
    Employee(){
        cout << "Default constructor called" << endl;
    }
    // constructor is a fuction that calls when the object of that class is created.

    Employee(int i, string n, int s){
        id = i;
        name = n;
        salary = s;
        // cout << "Parameterized constructor called" << endl;
    }

    void display(){
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

};

int main(){
    int id, salary;
    string name;
    
    cout << "Enter id-: " << endl;
    cin >> id;
    cout << "Enter name-: " << endl;
    cin >> name;
    cout << "Enter salary-: " << endl;
    cin >> salary;

    Employee e1 = Employee(id, name, salary);
    // object of class Employee is created and the parameterized constructor is called.
    
    e1.display();

    return 0;
}