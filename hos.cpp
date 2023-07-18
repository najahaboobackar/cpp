#include<iostream>
using namespace std;
class Hos
{
    int age;
    char name[45];
    int regid;
    int bill;
    public:
    void getpatient()
    {
        cout<<"enter the details of name\n age\n registration id\n bill number\n";
        cin>>name>>age>>regid>>bill;
    }
    void display()
    {
        cout<<"the details of patient "<<"name : "<<name<<" age :"<<age<<" regid :"<<regid<<" bill :"<<bill<<endl;
    }
    virtual void calcbill()=0;
};
class inpatient :public Hos
{
    
    const int cons=100;
    const int regfee=50;
    int med;
    int total;

    public:
    inpatient()
    {
        getpatient();
    }
    void getmed()
{
    cout<<"enter the medicine fee"<<endl;
    cin>>med;
}
void calcbill()
{
total=cons+regfee+med;
display();
cout<<"total :"<<total<<endl;

}
};
int main()
{
    Hos *h;
    inpatient i;
    h=&i;
    i.getmed();
    h->calcbill();
    return 0;
}
