#include<iostream>
#include<string>
using namespace std;
class numstring
{
    int num;
    string s;
    public:
    void pallindrome(int n)
    {
    num=n; int rev=0;
    while(n!=0)
    {
        int rem=n%10;
        int rev= rev*10+rem;
        n=n/10;
    }
    if(rev==n)
    {
        cout<<"PALLINDROME";
    
    }
    else
    {
        cout<<"not pallindrome";
    }
    }
    void pallindrome(string s1)
    { string rev=" ";
s=s1; int flag=0;
for(int i=s1.length();i>0;i--)
{
    rev=rev+s1[i];
}
for(int i=0; i<s1.length();i++)
{
if(rev[i]==s1[i])
{
    flag=1;

}
}
if(flag==1)
{
    cout<<"pallindrome";
}else
{
    cout<<"not";
}

    }


};
int main()
{
    numstring s;
    s.pallindrome(232);

    s.pallindrome("malaya");
    return 0;
}