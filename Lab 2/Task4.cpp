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
    }
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
    int choice;
    bankAccount b1;
    cout<<"=======Welcome to ATM======="<<endl;
    do
    {
    cout<<endl<<endl<<"Please select the menu:"<<endl<<"1.Deposit"<<endl<<"2.Withdraw"<<endl<<"3.Show balance"<<endl<<"4.Exit"<<endl;
    cout<<"Enter choice:";
    cin>>choice;
    switch (choice)
    {
    case 1:
        b1.deposit();
        break;
    case 2:
        b1.withdraw();
        break;
    
    case 3:
        b1.showbalance();
        break;
    case 4:
        break;
    default:
    cout<<"Invalid choice";
        break;
    }
    } while (choice!=4);
    return 0;
}