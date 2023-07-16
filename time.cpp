#include<iostream>
using namespace std;
class Time
{
    int hrs, min;
 public :
 int  addTime(int m)
    {
        min= m;
        hrs= min+hrs;
        return hrs;
}
     int  addTime(int m, int h)
{
    min=m;
    hrs=h;
    hrs= min/60+hrs;
    return hrs;

}
void display()
{
    cout<<"HOURS:"<<hrs;
}
};
 int main()
{
    Time t;
    
    t.addTime(60,3);
     t.addTime(3);
    t.display();
    return 0;
}