#include "iostream"
using namespace std;

class Book{
    const string ISBN;
    string title;
    public:
    Book(string isbn, string t): ISBN(isbn), title(t){}
    void displayDetails() const{
        cout<<"ISBN: "<<ISBN<<endl<<"Title: \""<<title<<"\""<<endl<<endl;
    }
    void updateTitle(string t){
        title=t;
    }
};

int main(){
    Book b1("978-3-16-148410-0", "Demon Slayer: Infinity Castle");
    b1.displayDetails();
    b1.updateTitle("Frieren: Beyond End's Journey");
    b1.displayDetails();

    const Book b2("368-4-13-123450-0", "Jujutsu Kaisen");
    b2.displayDetails();
    //b2.updateTitle("New Title"); Shows Error in updating since its const
};