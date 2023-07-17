#include<iostream>
using namespace std;
class book
{ 
    public:
    int id , price, page;
    char author[34],title[56];
    
    void get()
        {
            cout<<"enter the details of book title, author, page , price ,id";
            cin>>title>>author>>page>>price>>id;
        }
    
    void display( int d)
    {
        if(id==d)
        {
        cout<<"ID "<<id<<"price "<<price<<"page "<<page<<"author "<<author<<"title "<<title;
    }
    }
};
int main()
{
    book b[5]; int d;
    for(int i=0;i<5;i++)
    {
        b[i].get();
    }

    cout<<"enter the book id to be searched"<<endl;
    cin>>d;
    for(int i=0; i<5;i++)
    {
    
            b[i].display(d);
        
        }
        
    
    
    return 0;
}