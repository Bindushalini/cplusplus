#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int digit=2;
    while(digit<=100)
    {
        bool is_prime = true;
        for (int factor=2;factor<digit/2;factor++)
        {
            if (digit%factor == 0){
                is_prime=false;
                break;
            }
        }
        if (is_prime)
        {
            cout<<"prime number is :"<<digit<<std::endl;
        }
        digit++;
    }
}