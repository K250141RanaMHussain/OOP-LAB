#include <iostream>
using namespace std;
class Student{
    private:
    int rollnumber;
    float CGPA;
    public:
    void setData(int rollnumber, float CGPA){
        this->rollnumber = rollnumber;
        this->CGPA= CGPA;
    }
    void displayData(){
        cout<<"Roll number is "<< rollnumber <<endl;
        cout<<"CGPA is "<<CGPA<<endl;
    }
};

int main(){
    Student s1;
    int a;
    float b;
    cout<<"Enter value "<< endl;
    cin>>a;
    cin>>b;
    s1.setData(a,b);
    s1.displayData();
    return 0;
}