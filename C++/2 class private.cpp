#include <iostream>
using namespace std;
class ClassB;
class ClassA {
private:
    int A;
public:
    ClassA(int a) {
        A = a;
    }
    friend void add(ClassA a, ClassB b);
};
class ClassB {
private:
    int B;
public:
    ClassB(int b) {
        B = b;
    }
    friend void add(ClassA a, ClassB b);
};
void add(ClassA a, ClassB b) {
    int sum = a.A + b.B;
    cout << "Sum of numbers from ClassA and ClassB: " << sum << endl;
}
int main() {
    ClassA obj1(10);
    ClassB obj2(20);
    add(obj1, obj2);
    return 0;
}
