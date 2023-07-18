#include<iostream>
using namespace std;
class L
{ int max;

    public:
    void large(int a[])
    {
    max=a[0];
    for(int i=0;i<3;i++){
    if(a[i]>max)
    {
        max=a[i];
    }
    }
    cout<<"MAX : "<<max<<endl;
    }
};
class S
{
    int min;
    public:
    void small( int a[])
    {
        min=a[0];
        for(int i=0; i<3;i++)
        {
            if(a[i]<min)
            {
              min=a[i];
            }
        }
        cout<<"MIN : "<<min;
    }
};
class A: public L,public S

{ 
    public:
    int a[3];
    A()
    {
        cout<<"enter the values"<<endl;
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
    }
};
int main()
{
    A a1;
    a1.large(a1.a);
    a1.small(a1.a);
    return 0;
}