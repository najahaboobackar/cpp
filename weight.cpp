#include<iostream>
using namespace std;
class weight
{
    int kg,g;
    public:
    weight(int x=0, int y=0)
    {
        kg=x;
        g=y;
    }
    friend weight operator +(weight w1, weight w2)
    {
        weight t;
        t.g= (w1.kg)*1000+w1.g+(w2.kg)*1000+w2.g;
        return t;
    }
    void display()
    {
        cout<<"GRAM :"<<g;
    }
};
int main(){
    weight w3(4,5),w5(4,5),w;
    w=w3+w5;
    w.display();
    return 0;
}