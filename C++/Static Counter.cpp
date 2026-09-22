#include <iostream>
using namespace std;
class Counter {
private:
    static int count;
public:
    Counter() {
        count++;
    }
    static int getCount() {
        return count;
    }
};
int Counter::count = 0;
int main() {
    Counter c1, c2, c3;
    cout << "Number of Counter objects created: " << Counter::getCount() << endl;
    Counter c4;
    cout << "After creating one more object: " << Counter::getCount() << endl;
    return 0;
}
