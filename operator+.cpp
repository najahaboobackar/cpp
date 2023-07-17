#include <iostream>
using namespace std;

class weight {
    int kilo, gram;

public:
    // Parameterized constructor
    weight(int k, int g = 0) {
        kilo = k;
        gram = g;
        gram = kilo * 1000 + gram;
    }

    // Default constructor
    weight() : kilo(0), gram(0) {}

    friend weight operator+(weight& w, weight& w1) {
        weight temp;
        temp.gram = w.gram + w1.gram;
        return temp;
    }

    void display() {
        cout << "GRAM: " << gram;
    }
};

int main() {
    weight t(9, 7), t1(22, 56), t3;
    t3 = t + t1;
    t3.display();
    return 0;
}
