#include "iostream"
using namespace std;

class Employee{
    int empID;
    string name;
    int salary;

    public:
    void setEmployeeData(int id, string n, int sal){
        empID=id;
        name = n;
        salary = sal;
    };

    void displayEmployeeData(){
        cout<<"Employee ID: "<<empID<<endl;
        cout<<"Employee Name: \""<<name<<"\""<<endl;
        cout<<"Employee Salary: "<<salary<<"$"<<endl;
    };
};

class Manager: public Employee{
    string department;
    int bonus;

    public:
    void setManagerData(int i, string n, int s, string d, int b){
        setEmployeeData( i, n, s);
        department = d;
        bonus = b;
    }

    void displayManagerData(){
        displayEmployeeData();
        cout<<"Manager Department: \""<<department<<"\""<<endl;
        cout<<"Bonus Salary: "<<bonus<<"$"<<endl;
    }
};

int main(){
    Manager m1;
    m1.setManagerData( 4356 , "Ali Ahsan", 300000, "Backend Programming", 2700);
    m1.displayManagerData();

}