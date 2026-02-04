#include <iostream>
using namespace std;
class Car{
    private:
    float speed;
    public:
    void setSpeed(float s){
        speed=s;
    }
    float getSpeed(){
        if (speed>=0 && speed<=200)
        {
            cout<<"Speed is "<< speed;
        }else
        cout<<"Speed out of range";
        exit(1);
    }
};

int main(){
    Car c1;
    int a;
    cout<<"Enter value of speed: ";
    cin>>a;
    c1.setSpeed(a);
    cout<<c1.getSpeed();
    return 0;
}