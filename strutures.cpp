#include<iostream>
using namespace std;
#include "strutures.h"

cow::cow(int age_val, string name_val, unsigned char p)
{
    age = age_val;
    name = name_val;
    purpose = p;
}
void cow::display(){
    cout<<"age"<<age<<"name"<<endl<<name<<"purpose"<<purpose<<endl;
}
