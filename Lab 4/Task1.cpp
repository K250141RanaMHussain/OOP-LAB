#include "iostream"
using namespace std;

class University{
    static int totalStudents;
    string universityName;

    public:
    University(string name){
        universityName=name;
        totalStudents++;
    }

    static int getTotalStudents(){
        return totalStudents;
    }

    void displayInfo(){
        cout<<"University: \""<<universityName<<"\" "<<endl<<"Students: "<<totalStudents<<endl<<endl;
    }
    
};

int University::totalStudents=0;

int main(){
    University u1("NED University");
    u1.displayInfo();
    University u2("FAST NUCES");
    u2.displayInfo();
    University u3("IBA");
    u3.displayInfo();
    University u4("NUST");
    u4.displayInfo();

    cout<<"Total Students: "<<University::getTotalStudents();
};