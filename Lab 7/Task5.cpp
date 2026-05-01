#include<iostream>
using namespace std;

class Librarian; 

class Book {
private:
    string title;
    string author;
    float price;

public:
    Book(string t = "", string a = "", float p = 0) {
        title = t;
        author = a;
        price = p;
    }

    // ==
    bool operator==(Book b) {
        return title == b.title;
    }

    // <<
    friend ostream& operator<<(ostream& out, Book b);

    friend class Librarian;
    friend void applyDiscount(Book& b, float percent);
};

ostream& operator<<(ostream& out, Book b) {
    out << "Title: " << b.title
        << ", Author: " << b.author
        << ", Price: " << b.price;
    return out;
}

class Member {
private:
    string name;
    string borrowedBookTitle;

public:
    Member(string n) {
        name = n;
        borrowedBookTitle = "";
    }

    friend class Librarian;
};

class Librarian {
public:
    void displayBook(Book &b) {
        cout << b << endl;
    }

    void borrowBook(Member &m, Book &b) {
        m.borrowedBookTitle = b.title;
        cout << m.name << " borrowed " << b.title << endl;
    }
};

void applyDiscount(Book& b, float percent) {
    b.price -= b.price * (percent / 100);
}