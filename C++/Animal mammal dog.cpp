#include <iostream>
using namespace std;
class Animal {
public:
    void show() {
        cout << "This is the Animal class." << endl;
    }
};
class Mammal : public Animal {
public:
    void show() {
        cout << "This is the Mammal class." << endl;
    }
};
class Dog : public Mammal {
public:
    void show() {
        cout << "This is the Dog class." << endl;
    }
};
int main() {
    Dog d;
    d.Animal::show();
    d.Mammal::show();
    d.show();
    return 0;
}
