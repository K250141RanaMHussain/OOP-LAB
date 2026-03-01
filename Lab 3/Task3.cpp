#include <iostream>
#include <string>
using namespace std;

class Car
{
    string model;
    int year;
    double mileage;

public:
    Car(string model, int year, double mileage)
    {
        this->model = model;
        this->year = year;
        this->mileage = mileage;
    }

    void updateMileage(double mileage)
    {
        this->mileage = mileage;
    }

    void display() const
    {
        cout << "Model   : " << this->model << endl;
        cout << "Year    : " << this->year << endl;
        cout << "Mileage : " << this->mileage << endl;
    }
};

int main()
{
    Car c1("Toyota Corolla", 2020, 45000.5);

    cout << "Before updating mileage:\n";
    c1.display();

    c1.updateMileage(47050.8);

    cout << "\nAfter updating mileage:\n";
    c1.display();

    return 0;
}