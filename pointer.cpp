#include<iostream>
using namespace std;
class textbook
{
int page , price;
char name[21], title[32];
char Class[5];
public:
void get()
{
    cout<<" eneter the details of the name , title , price , page and Class"<<endl;
    cin>>name>>title>>price>>page>>Class;
}
void put()
{
    
    
    cout<<"NAME :"<<name<<endl<<"TITLE"<<title<<endl<<"PRICE"<<price<<endl<<"PAGE"<<page<<endl<<"CLASS"<<Class<<endl;

}
};
 int main()
 {
    textbook t,*b;
    b=&t;
    b->get();
    b->put();
    return 0;


 }