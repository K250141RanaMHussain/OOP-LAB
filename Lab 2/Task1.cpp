#include <iostream>
using namespace std;
class Radio{
    private:
    float frequency;
    int volume;
    public:
    void setfrequncy(float f){
        frequency=f;
    }
    void setvolume(int v){
        volume=v;
    }
    void showstatus(){
        cout<< "Frequency: "<<frequency<<endl;
        cout<< "Volume: "<<volume<<endl;
    }
};

int main(){
    Radio r1,r2;
    r1.setfrequncy(33),r1.setvolume(44);
    r1.showstatus();
    r2.setfrequncy(39),r2.setvolume(42);
    r2.showstatus();

}