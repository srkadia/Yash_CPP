//what is static?
//static is a keyword that is used to declare a variable as static.
// static variables are declared outside of any function and are global to the program.
// static variables are initialized when the program starts and are not reinitialized when the program restarts.
// static variables are initialized only once.
// static variables are destroyed when the program ends.

#include<iostream>
#include"Temp.cpp"
using namespace std;

class Account{
    private:
        int accountNumber = 0;
        double balance;

    public:
        static int numberOfAccounts;
        Account(double initialBalance){
            balance = initialBalance;
            accountNumber = ++numberOfAccounts;
        }

        void display(){
            cout << accountNumber << "\t\t";
            cout << balance << endl;
        }
};

int Account::numberOfAccounts = 0;

int main(){
    Account a1(100);
    Account a2(200);
    Account a3(300);

    cout << "Account Number\tBalance" << endl;
    a1.display();
    a2.display();
    a3.display();
    fun();

    cout << "Total number of accounts: " << Account::numberOfAccounts << endl;
    
    return 0;
}