// What is Inheritance?
// Inheritance is a way to create new classes from existing classes.
// It is a way to reuse the code of existing classes.
//we can use the exixting code of our parent class to child class.
//we don't have to write the code again.
//we will inherit the code from parent class.

/*

5 types of Inheritance-:
    1. Single Inheritance
    2. Multilevel Inheritance
    3. Hierarchical Inheritance
    4. Multiple Inheritance
    5. Hybrid Inheritance

*/

#include<iostream>
using namespace std;

class Calculator{
    public:
        int Add(int a, int b){
            int c = a + b;
            return c;
        }
};

class Adder{
    public:
        int Addition(int a, int b){
            int c = a + b;
            return c;
        }
};

int main()
{
    Calculator cal;
    cout << cal.Add(2,3) << endl;
    Adder add;
    cout << add.Addition(2,3) << endl;
    return 0;
}