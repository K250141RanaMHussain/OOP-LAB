#include <iostream>
using namespace std;


class Person {
protected:
    string name;

public:
    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }

    void putName() {
        cout << "Name: " << name << endl;
    }


    virtual void getData() = 0;
    virtual bool isOutstanding() = 0;
};

class Student : public Person {
private:
    float gpa;

public:
    void getData() {
        getName();
        cout << "Enter GPA: ";
        cin >> gpa;
    }

    bool isOutstanding() {
        return (gpa > 3.5);
    }
};

class Professor : public Person {
private:
    int publications;

public:
    void getData() {
        getName();
        cout << "Enter number of publications: ";
        cin >> publications;
    }

    bool isOutstanding() {
        return (publications > 100);
    }
};


int main() {
    char choice;

    do {
        cout << "\nEnter 's' for Student or 'p' for Professor: ";
        cin >> choice;

        Person* p; 

        if (choice == 's' || choice == 'S') {
            p = new Student();
        }
        else if (choice == 'p' || choice == 'P') {
            p = new Professor();
        }
        else {
            cout << "Invalid choice.\n";
            continue;
        }

        p->getData();
        p->putName();

        if (p->isOutstanding())
            cout << "This person is Outstanding.\n";
        else
            cout << "This person is NOT Outstanding.\n";

        delete p;

        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}