#include<iostream>
using namespace std;

class Account;
class Customer;

class Account{
    int accountNumber;
    double accountBalance;

    public:
    Account(int accountNumber, double accountBalance){
        this->accountBalance=accountBalance;
        this->accountNumber=accountNumber;

        cout<<"Account "<<accountNumber<<" is created"<<endl;
    }

    friend bool verifyAccount(Account account, Customer account2);
};

class Customer{
    int accountNumber;
    string name;

    public:
    Customer(int accountNumber,string name){
        this->name=name;
        this->accountNumber=accountNumber;
        cout<<"Account "<<accountNumber<<" is created"<<endl;
    }

    friend bool verifyAccount(Account account, Customer account2);
};

bool verifyAccount(Account account, Customer account2){
    if(account.accountNumber==account2.accountNumber && account.accountBalance>=0)
    return true;
    else
    return false;
}

int main(){
    Account a1(23467, 43567098.0);
    Customer c1(23467, "Rana Muhammad Hussain");
    bool status=verifyAccount(a1,c1);
    if(status==true){
        cout<<"The account is verified!"<<endl;
    }
    return 0;
}