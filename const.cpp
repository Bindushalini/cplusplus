#include<iostream>
using namespace std;

class C1{
    int c1val;
    public:
    C1(){}
    void setVal(int value){ c1val = value;}
    int getVal() const{return c1val;}
};
int main()
{
    C1 c;
    c.setVal(8);
    const C1 c2 =c;

    cout<<c.getVal()<<endl;
    cout<<c2.getVal()<<endl;
}