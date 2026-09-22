#include <iostream>
using namespace std;
class Person {
protected:
    string name;
public:
    void Name() {
        cout << "Enter name: ";
        getline(cin, name);
    }
    void display() {
        cout << "Name: " << name << endl;
    }
};
class Employee : public Person {
private:
    int id;
public:
    void ID() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();
    }
    void displayID() {
        cout << "ID: " << id << endl;
    }
    void Details() {
        Name();
        ID();
    }

    void displayDetails() {
        Name();
        displayID();
    }
};
int main() {
    Employee emp;
    emp.Details();
    cout << "\nEmployee Details:" << endl;
    emp.displayDetails();
    return 0;
}
