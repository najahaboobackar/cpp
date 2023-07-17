#include<iostream>
using namespace std;
class series
{
    char x;
    public:
    series(char y)
    {
        x=y;
    }
    void sum()
    { int n;
        cout<<"enter the limit";
        cin>>n;
        cout<<"1+";
        for(int i=1; i<n;i++)
        {
            cout<<x<<"^"<<i<<"+ ";
        }
    }
};
int main()
{
    series s('z');
    s.sum();
    return 0;
}