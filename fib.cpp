#include<iostream>
using namespace std;
class fib
{ int f, s, n;
public:
   
    void fibino(int n1)
    { int n, f=0,s=1;
    cout<<0<<" "<<1;
        for(int i=0; i<n1;i++)
        {
            n=f+s;
            cout<<" "<<n;
            f=s;
            s=n;

        }
         
        cout<<endl;
    }
};
int main()
{
    fib f1;
    f1.fibino(21);
    return 0;
}