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

    // ==
    bool operator==(Rupee r) {
        return value == r.value;
    }

    // <<
    friend ostream& operator<<(ostream& out, Rupee r);
};

ostream& operator<<(ostream& out, Rupee r) {
    out << "Rs. " << r.value;
    return out;
}