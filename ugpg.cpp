#include<iostream>
using namespace std;

class Student
{
    int roll;
    char name[89];

public:
    void getstudent()
    {
        cout << "enter the name and roll" << endl;
        cin >> name >> roll;
    }

    void display()
    {
        cout << "NAME: " << name << endl << "ROLL NO: " << roll << endl;
    }
};

class UG : public Student
{
    int m1, m2, m3;
    int tot;

public:
    void get()
    {getstudent();
        cout << "enter the marks" << endl;
        cin >> m1 >> m2 >> m3;
        tot = m1 + m2 + m3;
    }
    void dis1(){
        display();
        cout << "TOTAL: " << tot << endl;
    }
};

class PG : public Student
{
    char speci[90];
    char dept[78];

public:
    void get1()
    {
        getstudent();
        cout << "enter the specialized and department" << endl;
        cin >> speci >> dept;
    }
    void dis2()
    {
        display();
        cout << "SPECIALIZED: " << speci << " department " << dept << endl;
    }
};

class Result : public UG, public PG
{
public:
    Result(int x) : UG(), PG()
    {
        if (x == 1)
        {
            
            get();
            dis1();
        }
        else if (x == 2)
        {
        
            get1();
            dis2();
        }
        else
        {
            cout << "INVALID";
        }
    }
};

int main()
{
    
    Result r(1), r2(2), r3(3);

  
    return 0;
}

