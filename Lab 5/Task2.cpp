#include "iostream"
using namespace std;

class Person{
    protected:
    string name;
    int age;
    public:
    void setPerson(int age , string name){
        this->age=age;
        this->name=name;
    };

    void displayPerson(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    };
};

class StudentPublic: public Person{};
class StudentProtected: protected Person{
    public:
    void accessData(int a, string n){
        setPerson(a,n);
        displayPerson();
    };
};
class StudentPrivate: private Person{
    public:
    void accessData(int a, string n){
        setPerson(a,n);
        displayPerson();
    };
};

int main(){
    StudentPublic s1;
    s1.setPerson(19,"Asad Ali Khan");
    s1.displayPerson();

    StudentProtected s2;
    // s2.setPerson(16, "Hammad Shah");  NOT accesible from main
    //    s2.displayPerson();   NOT accessible from main
    s2.accessData(19, "Hammad Shah");

    StudentPrivate s3;
    // s3.setPerson(21, "Syed Hamzah");     NOT accessible from main
    // s3.displayPerson();    NOT accessible from main
    s3.accessData(21, "Syed Hamzah");
};