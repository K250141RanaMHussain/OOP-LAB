#include "iostream"
using namespace std;

class Person{
    string name;
    int age;

    public:
    Person(string name, int age){
        this->name=name;
        this->age=age;
    }
    void displayPerson(){
        cout<<"Name :"<< name << endl;
        cout<<"Age :"<< age << endl;
    }
};

class Student: public Person{
    string studentID;
    string program;

    public:
    Student(string ID, string program, string name, int age) : Person(name, age){
        studentID = ID;
        this->program = program;
    }

    void displayStudent(){
        displayPerson();
        cout<<"ID :"<< studentID << endl;
        cout<<"Program :"<< program << endl;
    }
};

class GraduateStudent : public Student{
    string researchTopic;
    string supervisorName;

    public:
    GraduateStudent(string rt, string svn, string ID, string program, string name, int age) : Student(ID, program, name, age){
        researchTopic=rt;
        supervisorName=svn;
    }
    void displayGraduateStudent(){
        displayStudent();
        cout<<"Research Topic :"<< researchTopic << endl;
        cout<<"Super Visor Name :"<< supervisorName << endl;
    }
};

int main(){
    GraduateStudent s1("Machine Learning", "Muhammad Rafi", "25K-0141", "BAI-8A", "Hammad Ahmend", 23);
    s1.displayGraduateStudent();
}