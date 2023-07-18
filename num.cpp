#include<iostream>
using namespace std;
class float_num
{ public:
    float n,m;
    
    void getfloat()
    {
        cout<<"enter the number"<<endl;
        cin>>n>>m;
    
    }

};
class multipilcation:virtual public float_num
{ float multi;
public:
    float mult()
    {
multi=n*m;
 return multi;
    }
};
class divsion :virtual public float_num{
    float divi;
    public:
    float div()
    {
        divi=n/m;
        return divi;
    }
};
class arithematic :public divsion, public multipilcation
{
    float d, m1;
    public:
    arithematic(){
        getfloat();
    }
    void display()
    {
         d=div();
         m1=mult();
        cout<<"DIVISION :"<<d<<endl<<"MULTIPLICATION "<<m1<<endl;
    }
};
int main()
{
    arithematic a;
    a.display();
    return 0;

}

