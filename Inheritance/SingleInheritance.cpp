#include<iostream>
using namespace std;
/*
class A{
    protected:
        int a = 23;
};

class B : public A{
    public:
        void display(){
            cout << endl << a;
        }
};

int main(){
    // creating object...
    // class_name object_name
    B obj;

    obj.display();

    return 0;
}
*/

/*

make a cpp program where you have to create 2 classes A and B, where A is a base class and B is a derived class.

now you have to create a scan method which scans the value of a and b and display the value of a and b.

now in class b you have to create a method which will called add, sub, mul, div and display the value of result.

now class b will take values from class a and process the result.


*/


class Human{
    protected:
        int age;
        string name;
};

class Student : public Human{
    private:
        int roll;
    public:
        void scan(){
            cout << "Enter the age: ";
            cin >> age;
            cout << "Enter the name: ";
            cin >> name;
            cout << "Enter the roll: ";
            cin >> roll;
        }

        void display(){
            cout << endl << "Age: " << age << endl << "Name: " << name << endl << "Roll: " << roll;
        }
};

int main(){
    Student obj;

    obj.scan();
    obj.display();

    return 0;
}
