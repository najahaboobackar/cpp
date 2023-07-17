#include<iostream>
using namespace std;

class Vector {
    int a, b, c;

public:
    Vector(int d = 0, int e = 0, int f = 0) {
        a = d;
        b = e;
        c = f;
    }

    friend Vector mul(Vector v1, Vector v2) {
        Vector r;
        r.a = v1.b * v2.c - v1.c * v2.b;
        r.b = v1.c * v2.a - v1.a * v2.c;
        r.c = v1.a * v2.b - v1.b * v2.a;
        return r;
    }

    void display() {
        cout << a << "i + " << b << "j + " << c << "k" << endl;
    }
};

int main() {
    Vector V1(2, 3, 4), V2(5, 6, 7), V3;
    V3 = mul(V1, V2);
    V3.display();
    return 0;
}
