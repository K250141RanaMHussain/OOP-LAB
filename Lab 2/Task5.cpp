#include "iostream"
using namespace std;

struct employeeStruct
{
    int age;
    string name;
    int salary;
};

class employeeClass{
    private:
    int salary;

    public:
    string name;
    int age;
    void setEmployee(string name, int age, int salary){
    this->name=name;
    this->age=age;
    this->salary=salary;
    }

    int getEmployee(){
        cout<<"Details of employee in class:"<<endl<<name<<endl<<age<<endl<<salary;
        return 0;
    }
};
int main(){
    employeeStruct e1;
    e1.name = "John";
    e1.age = 39;
    e1.salary= 250000;
    cout<<"Details of employee in structure:"<<endl<<e1.name<<endl<<e1.age<<endl<<e1.salary<<endl<<endl;

    employeeClass E1;
    E1.setEmployee("Jack",41,320000);
    cout<<E1.getEmployee();
}