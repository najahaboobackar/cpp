#include <iostream>
#include <math.h>

using namespace std;

class Point
{
    int y, x;

public:
    Point(int z, int w)
    {
        y = z;
        x = w;
    }
    friend void root(Point p, Point p1)
    {
        cout << "d=" << sqrt(pow((p.x - p1.x), 2) + pow((p.y - p1.y), 2)) << endl;
    }
};

int main()
{
    Point p2(2, 4), p3(3, 6);
    root(p2, p3);
    return 0;
}
