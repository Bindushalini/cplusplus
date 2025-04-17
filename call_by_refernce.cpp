#include<iostream>
using namespace std;


void func(const int &p)
{
    cout<<"value"<<p;
    //p++;
}
int main()
{
    int x = 10;
    func(x);
    cout<<"valuee"<<x;
}