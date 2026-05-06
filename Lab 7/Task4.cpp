#include<iostream>
using namespace std;

class Rupee {
private:
    long value;

public:
    Rupee(long v = 0) {
        value = v;
    }

    // +
    Rupee operator+(Rupee r) {
        return Rupee(value + r.value);
    }

    Rupee operator-(Rupee r) {
        return Rupee(value - r.value);
    }

    // ==
    bool operator==(Rupee r) {
        return value == r.value;
    }

    // <<
    friend ostream& operator<<(ostream& out, Rupee r);
};

ostream& operator<<(ostream& out, Rupee r) {
    out << "Rs. " << r.value<<endl;
    return out;
}

int main(){
    Rupee r1(50);
    Rupee r2(40);
    Rupee r3=r1+r2;
    r1=r3;
    cout<<r1;
    cout<<r3;
    cout<<r2;
}