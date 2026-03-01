#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    char* grades[5]; 

    Student(string n, const char g[])
    {
        name = n;

        for(int i = 0; i < 5; i++)
            grades[i] = new char(g[i]);  
    }

    Student(const Student& obj)
    {
        name = obj.name;

        for(int i = 0; i < 5; i++)
            grades[i] = new char(*obj.grades[i]);
    }

    void changeGrade(int index, char g)
    {
        if(index >= 0 && index < 5)
            *grades[index] = g;
    }

    void show() const
    {
        cout << "Student Name: " << name << endl;
        cout << "Grades: ";

        for(int i = 0; i < 5; i++)
            cout << *grades[i] << " ";

        cout << endl;
    }

    ~Student()
    {
        for(int i = 0; i < 5; i++)
            delete grades[i];  
    }
};

int main()
{
    char g[5] = {'A','B','C','D','E'};

    Student s1("Ali", g);

    Student s2 = s1;   

    s1.changeGrade(0, 'F');

    s1.show();
    s2.show();
}