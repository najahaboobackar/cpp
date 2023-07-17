#include<iostream>
using namespace std;
class Height
{
    float feet, inch;
    public:
    Height(float f, float i)
    {
        feet=f;
        inch=i;
    
    }
    float operator> (Height h)
    {
        if(feet>h.feet && inch>h.inch)
        {
            return 1;
        }else 
        return  0;
    }
};
int main()
{
    Height H3(4.0,8.9),H2(1.0,4.0);
    if(H2>H3)
    {
        cout<<"object1  is greater"<<endl;
    }
    else if(H3>H2)
    {
        cout<<"object2 is greater";
    }
    return 0;
}