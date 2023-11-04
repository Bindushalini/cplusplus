#include<iostream>
using std::cout;

template<typename T>
T maxof(T a, T b){
    return a>b?a:b;
}


int main()
{
    float a = 10.9;
    float b = 20.9999;
    int ac = 10.9;
    int bd = 20.9999;
    auto z = maxof<float>(a,b);
    auto zx = maxof<int>(ac,bd);
    cout<<z<<zx;
}