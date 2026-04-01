#include "iostream"
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Teacher : virtual public Person {
protected:
    string subject;
public:
    Teacher(string n, int a, string sub) : Person(n, a), subject(sub) {}
    void displayTeacher() {
        cout << "Subject: " << subject << endl;
    }
};

class Student : virtual public Person {
protected:
    string studentID;
public:
    Student(string n, int a, string id) : Person(n, a), studentID(id) {}
    void displayStudent() {
        cout << "Student ID: " << studentID << endl;
    }
};

class TeachingAssistant : public Teacher, public Student {
    string department;
public:
    TeachingAssistant(string n, int a, string sub, string id, string dept)
        : Person(n, a), Teacher(n, a, sub), Student(n, a, id), department(dept) {}

    void displayTA() {
        displayPerson();
        displayTeacher();
        displayStudent();
        cout << "Department: " << department << endl;
    }
};

int main() {
    TeachingAssistant ta("Ali Khan", 25, "Math", "ST-101", "Science");
    ta.displayTA();
};