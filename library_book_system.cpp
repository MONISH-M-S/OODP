#include <iostream>
using namespace std;
class Book {
private:
    string title;
    string author;
    double bookid;
    double price;
public:
    void inputdetails();
    void showdetails();
};
void Book::inputdetails() {
    cout << "Enter book title: ";
    cin >> title;
    cout << "Enter author name: ";
    cin >> author;
    cout << "Enter book ID: ";
    cin >> bookid;
    cout << "Enter book price: ";
    cin >> price;
}
void Book::showdetails() {
    cout << "Book Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Book ID: " << bookid << endl;
    cout << "Book Price: $" << price << endl;
}
int main () {
    Book b[3];
    for (int i = 0; i < 3; i++) {
        b[i].inputdetails();
    }
    for (int i = 0; i < 3; i++) {
        b[i].showdetails();
    }
    return 0;
}