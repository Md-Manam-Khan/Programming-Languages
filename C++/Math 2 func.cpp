#include <iostream>
using namespace std;
class MathOp {
public:
    int add(int a, int b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
};
int main() {
    MathOp math;
    int sum1 = math.add(10, 20);
    cout << "Sum of 10 and 20: " << sum1 << endl;
    int sum2 = math.add(5, 15, 25);
    cout << "Sum of 5, 15 and 25: " << sum2 << endl;
    return 0;
}
