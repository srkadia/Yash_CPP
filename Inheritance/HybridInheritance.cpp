#include<iostream>
using namespace std;

//Hybrid Inheritance - It is a combination of multiple(one or more) inheritance.

class A {
public:
    void a() {
        cout << "A's a" << endl;
    }
};

class B : public A {
public:
    void b() {
        cout << "B's b" << endl;
    }
};

class C : public A {
public:
    void c() {
        cout << "C's c" << endl;
    }
};

class D : public B, public C {
public:
    void d() {
        cout << "D's d" << endl;
    }

    void print() {
        B::a();
        b();
        c();
        d();
    }
};

int main(){
    D d;
    d.print();
    return 0;
}