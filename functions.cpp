#include<iostream>
using namespace std;

void func(int *p){
    ++*p;
}

int main()
{
   int a{7};
   func(&a);
   cout<<a;
}