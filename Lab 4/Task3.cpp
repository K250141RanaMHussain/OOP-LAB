#include<iostream>
using namespace std;

class Author{
    string name;
    int authorID;

    public:
    Author(string name, int authorID){
        this->name=name;
        this->authorID=authorID;
    }

    void displayAuthor() {
        cout<<"====================\n";
        cout << "Author ID: " << authorID <<endl<< "Name: \""<<name<<"\""<< endl;
        cout<<"====================\n";
    }
};

class Book{
    string title;
    Author* authors[5];
    int authorcount;

    public:
    Book(string title){
        this->title=title;
        authorcount=0;
    }

    void addAuthors(Author* obj){
        if (authorcount<5)
        {
            authors[authorcount]=obj;
            authorcount++;
        }else
        {
            cout<<"The arrays of author for a book "<<title<<" is filled\n\n";
        }
    }

    void displayAuthors() {
        cout << "Book Title: \"" << title <<"\"" << endl;
        cout << "Authors:\n";
        for (int i = 0; i < authorcount; i++) {
            authors[i]->displayAuthor();
        }
        cout << endl;
    }

};

int main(){
    Author a1("J.K. Rowling", 101);
    Author a2("Stephen King", 102);
    Author a3("George R.R. Martin", 103);
    Author a4("Charles Dickens", 104);
    Author a5("Leo Tolstley", 105);
    Author a6("Dan Brown", 106);

    Book b1("Fictional Collection");

    b1.addAuthors(&a1);
    b1.addAuthors(&a2);
    b1.addAuthors(&a3);
    b1.addAuthors(&a4);
    b1.addAuthors(&a5);
    b1.addAuthors(&a6);  //will show overflow error

    b1.displayAuthors();

};