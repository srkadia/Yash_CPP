#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "Animal is eating..." << endl;
    }
};

class Dog: public Animal{
    public:
    void bark(){
        cout << "Dog is barking..." << endl;
    }
};

class BabyDog: public Dog{
    public:
    void weep(){
        cout << "Baby dog is weeping..." << endl;
    }
};

int main(){
    BabyDog obj;
    obj.eat();
    obj.bark();
    obj.weep();
    return 0;
}