#include<iostream>
#include<math.h>
using namespace std;
class gp
{
    float a, r,s;
     public:
     gp(float a1, float r1)
     {
        a=a1;
        r=r1;

     }
     void sum()
     {
        s=(pow(a,r)-1)/(r-1);
        cout<<"SUM :"<<s;
     }
};
int main()
{
    gp g(3,4);
    g.sum();
    return 0;
}