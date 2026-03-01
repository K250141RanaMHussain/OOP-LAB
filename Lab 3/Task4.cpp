#include <iostream>
using namespace std;

class Rectangle
{
    double length;
    double width;
    const double area;

public:
    // Member initializer list
    Rectangle(double length, double width)
        : length(length), width(width), area(length * width)
    {
    }

    void setLength(double length)
    {
        this->length = length;
    }

    void setWidth(double width)
    {
        this->width = width;
    }

    void show() const
    {
        cout << "Length : " << length << endl;
        cout << "Width  : " << width << endl;
        cout << "Area   : " << area << endl;
    }
};

int main()
{
    Rectangle r(5, 4);

    cout << "Before change:" << endl;
    r.show();

    r.setLength(10);
    r.setWidth(2);

    cout << "\nAfter change of length and width:" << endl;
    r.show();

    return 0;
}