//This Keyword is used to access the current object.
//this tells the compiler that the current object is the one that is being used.
//this keyword refers the current class variables.

#include<iostream>
using namespace std;

class Student{
    private:
        int roll;
        string name;
        // float marks;
        // string area;
        // string city;

    public:
        Student(int roll, string name){
            this->roll = roll;
            this->name = name;
            // this->marks = marks;
        }

        void display(){
            cout << roll << "\t";
            cout << name << "\n";
            // cout << marks << endl;
        }
};

int main(){
    Student s1(1, "Raj");
    Student s2(2, "Raju");
    Student s3(3, "Rajesh");

    cout<< "id" << "\t" << "name" << endl;
    s1.display();
    s2.display();
    s3.display();

    return 0;
}