#include "iostream"
using namespace std;

class Device{
    string deviceName;
    string brand;

    public:
    void setDevice(string deviceName, string brand){
        this->deviceName=deviceName;
        this->brand=brand;
    }

    void displayDevice(){
        cout<<"Name: "<< deviceName << endl;
        cout<<"Brand: "<< brand << endl;
    }
};

class Connectivity{
    bool wifiStatus;
    bool bluetoothStatus;

    public:
    void setConnectivity(bool wifi, bool bluetooth){
        wifiStatus=wifi;
        bluetoothStatus=bluetooth;
    }

    void displayConnectivity(){
        cout<<"Wifi status: "<<(wifiStatus ? "On" : "Off")<<endl;
        cout<<"Bluetooth Status: "<< (bluetoothStatus ? "On" : "Off")<< endl;
    }
};

class SmartWatch: public Device, public Connectivity{
    int heartRate;
    int stepCounts;

    public:
    void setSmartWatch(int heart, int steps, bool wifi, bool bluetooth, string deviceName, string brand){
        setDevice(deviceName,brand);
        setConnectivity(wifi,bluetooth);
        heartRate=heart;
        stepCounts=steps;
    }

    void displaySmartWatch(){
        displayDevice();
        displayConnectivity();
        cout<<"Heart Rate: "<<heartRate<<" BPM"<<endl;
        cout<<" Step Counts: "<<stepCounts<<endl;
    }
};

int main(){
    SmartWatch s1;
    s1.setSmartWatch(123,7398,true,false, "Smart Watch", "Samsung");
    s1.displaySmartWatch();
};