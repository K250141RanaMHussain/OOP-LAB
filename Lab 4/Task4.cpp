#include "iostream"
using namespace std;

class Processor{
    string model;
    double speed;
    public:
    Processor(string model, double speed){
        this->model=model;
        this->speed=speed;
    }

    void displayProcessor(){
        cout<<"Model: "<<model<<""<<endl;
        cout<<"Speed: "<<speed<<" GHz"<<endl;
    }
};
class RAM{
    int size;
    string type;
    public:
    RAM(int size, string type){
        this->size=size;
        this->type=type;
    }

    void displayRAM(){
        cout<<"Type: "<<type<<""<<endl;
        cout<<"Size: "<<size<<" GB"<<endl;
    }
};

class Computer{
    Processor processor;
    RAM ram;
    public:
    Computer(string pmodel, double pspeed, int rsize, string rtype): processor(pmodel,pspeed),ram(rsize,rtype){}

    void displaySpecs(){
        cout<<"\n=====================================\n";
        cout<<"=======COMPUTER SPECIFICATIONS=======\n";
        cout<<"=====================================\n";
        processor.displayProcessor();
        ram.displayRAM();
    }

};

int main(){
    Computer c1("Intel i7", 3.5, 16, "DDR4");
    c1.displaySpecs();
};