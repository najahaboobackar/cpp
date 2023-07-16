#include <iostream>
#include <math.h>
using namespace std;

class Quadratic
{
    int a, b, c;
    double d; // Change to double for correct floating-point division

public:
    Quadratic(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    void display()
    {
        cout << a << "x^2 +" << b << "x +" << c << endl;
    }

    friend void root1(Quadratic q2)
    {
        double discriminant = pow(q2.b, 2) - 4 * q2.a * q2.c;

        if (discriminant >= 0)
        {
            q2.d = (q2.b + sqrt(discriminant)) / (2.0 * q2.a); // Use 2.0 for floating-point division
            cout << "Root: " << q2.d << endl;
        }
        else
        {
            cout << "No real roots for the quadratic equation." << endl;
        }
    }
};

int main()
{
    Quadratic q1(1, 2, 3);
    q1.display();
    root1(q1); // Call root1 directly since it's a friend function.
    return 0;
}
