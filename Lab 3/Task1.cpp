#include "iostream"
using namespace std;

class Book{
    string title;
    string author;
    float price;
    public:
    Book(){
        title = "Unknown";
        author ="Unknown";
        price = 0.0;
    }

    Book(string title, string author, float price){
        this->title=title;
        this->author=author;
        this->price=price;
    }

    void display(){
        cout<<"Title: \""<<title<<"\""<<endl;
        cout<<"Author: \""<<author<<"\""<<endl;
        cout<<"Price : "<<price<<" $"<<endl<<endl;
    }
};

int main(){
    Book b1;  //Default constructor
    b1.display();

    Book b2("Jujutsu Kaisen","Gege Akutami", 67.99);    //Parameterized Constructor
    b2.display();
    return 0;
}