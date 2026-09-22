#include <iostream>
#include <cmath>
using namespace std;
class Circle {
private:
    int radius;
public:
    Circle() {
        radius = 1.0;
    }
    Circle(double r) {
        radius = r;
    }
    double calculate() {
        return M_PI * radius * radius;
    }
};
int main() {
    Circle c1;
    cout << "Area of default circle (radius 1.0): " << c1.calculate() << endl;
    Circle c2(5.0);
    cout << "Area of circle with radius 5.0: " << c2.calculate() << endl;
    return 0;
}
