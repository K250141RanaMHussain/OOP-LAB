#include "iostream"
using namespace std;

class bankAccount{
    private:
    int balance=0;

    public:
    int bal;
    int deposit();
    int withdraw();
    void showbalance();
};

int bankAccount :: withdraw(){
    cout<<"Enter amout to withdraw from:";
    cin>>bal;
    if( balance < bal || balance <= 0){
    cout<<"Insufficient Balance";
    exit(1);}
    else{
    balance = balance - bal;}
    return 0;
};

int bankAccount :: deposit(){
    cout<<"Enter balance to deposit:";
    cin>> bal;
    balance= balance + bal;
    return 0;
}

void bankAccount :: showbalance(){
    cout<<"The remaining balance is "<<balance;
}

int main(){
    bankAccount b1;
    b1.deposit();
    b1.withdraw();
    b1.showbalance();
    return 0;
}