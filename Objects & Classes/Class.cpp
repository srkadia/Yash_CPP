#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    string name;

public:
    void scan(int i, string n)
    {
        id = i;
        name = n;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    int id;
    string name;
    Student s, s1;

    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin >> name;

    s.scan(id, name);
    s1.scan(2, "Jane");
    s.display();
    s1.display();
    return 0;
}

/*
-------------------------------------------------------------
You have to make a class called Employee, in which you will store the following information:
emp_id, emp_name, emp_salary, emp_dept, emp_age.

take all the data form the user and store it in the class.
make two methods called scan and display.

display information of atleast 5 employees.
-------------------------------------------------------------
*/