#include<iostream>
using namespace std;
class float_number
{ public:
    float a, b;
    public:
    float get()
    {
        cout<<"enter two numbers"<<endl;
        cin>>a>>b;
        return a,b;
    }
};
class mul:public float_number{
    public:
    float mult()
    {
        get();
        float m;
        m=a*b;
    return m;
    }
};
class div :public float_number{
    public:
    float div1()
    {
    get();
        float d;
        d=a/b;
        return d;
    }
};
class arithematic:public div, public mul{
    public:
    void display()
    {
        float m1=mult();
        float d2 =div1();
        cout<<d2<< "=divsion multiplication="<<m1<<endl;
    }
};
int main()
{
    arithematic a;
    a.display();
    return 0;
}