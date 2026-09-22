#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double calculateArea() {
        return length * width;
    }
};
int main() {
    Rectangle rect(10.5, 4.2);
    cout << "Area of the rectangle: " << rect.calculateArea() << endl;
    return 0;
}
