#include<iostream>
using namespace std;

class Sample{
public:
    Sample(){
        cout << "Constructor" << endl;
    }

    ~Sample(){
        cout << "Destructor" << endl;
    }
};

//Destructor is called when the object is destroyed
//Destructor is called at the end of the program

int main(){
    Sample s;

    if(1){
        Sample s1;
        cout<<"Inside if"<<endl;
        cout<<"s1"<<endl;
    }
    return 0;
}