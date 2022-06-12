#include<iostream>
using namespace std;

class Employee{
public:
    int emp_id;
    string emp_name;
    float emp_salary;
    string emp_dept;
    int emp_age;

    void scan(int i, string n, float s, string d, int a){
        emp_id = i;
        emp_name = n;
        emp_salary = s;
        emp_dept = d;
        emp_age = a;
    }

    void display(){
        cout << emp_id << "\t";
        cout << emp_name << "\t";
        cout << emp_salary << "\t";
        cout << emp_dept << "\t\t";
        cout << emp_age << endl;

    }
};

int main(){
    Employee e[5];
    int id;
    string name;
    float salary;
    string dept;
    int age;

/*
    for(int i=0; i<5; i++){
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter Department: ";
        cin >> dept;
        cout << "Enter Age: ";
        cin >> age;

        e[i].scan(id, name, salary, dept, age);
    }
    */

    e[0].scan(1, "John", 1000, "IT", 25);
    e[1].scan(2, "Jane", 2000, "HR", 30);
    e[2].scan(3, "Jack", 3000, "Sales", 35);
    e[3].scan(4, "Jill", 4000, "Admin", 40);
    e[4].scan(5, "Jim", 5000, "Finance", 45);



    cout << "\nID\tName\tSalary\tDepartment\tAge" << endl;
    for(int i=0; i<5; i++){
        e[i].display();
    }

    return 0;
}