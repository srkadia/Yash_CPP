//ambiguity resolution in multiple inheritance
#include<iostream>
using namespace std;


class Father {
public:
    void car() {
        cout << "Father's Car" << endl;
    }
};

class Mother {
public:
    void car() {
        cout << "Mother's Car" << endl;
    }
};

class Child : public Father, public Mother {
public:
    void car() {
        Father::car();
        Mother::car();
    }
};

int main()
{
    Child c;

    // c.car(); // here occurs ambiguity

    c.car();

    return 0;
}
