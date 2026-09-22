#include <iostream>
using namespace std;
class Book {
private:
    string title;
    int price;
public:
    void input() {
        cout << "Enter book title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter book price: ";
        cin >> price;
    }
    void display() {
        cout << "Title: " << title << ", Price: $" << price << endl;
    }
};
int main() {
    Book books[3];
    for (int i = 0; i < 3; i++) {
        cout << "\nBook " << i + 1 << ":" << endl;
        books[i].input();
    }
    for (int i = 0; i < 3; i++) {
        cout << "Book " << i + 1 << ": ";
        books[i].display();
    }
    return 0;
}
