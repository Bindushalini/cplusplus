#include<iostream>
using namespace std;
#include<string>
#include<typeinfo>
#include<cstring>
#include "strutures.h"
#include<vector>
// int main(){
//     string s;
//     cout<<"hello world"<<endl;
//     cout<<"enter your name";
//     cin>>s;
//     cout<<s;
//     return 0;
// }

// int a, b =5;
auto a=8;
auto b=122332111111;
auto c = 3.14f;
auto d= 3.14;
auto e=true;
auto f = 'd';
const int AGE_LENGTH = 4;
int age[AGE_LENGTH] ;
float temp[] = {23.21, 34.78, 23.111};

const int LENGTH1 = 25;
char arr_str1 [LENGTH1] = "Hey guys! ";
char arr_str2[] = "ssasa";

string str_1 = "hi eee";
string str_2 = "hi sssseee";


int main(){
    // bool my_flag;
    // my_flag = true;
    // cout<<"a"<<a<<b<<endl;
    // cout<<my_flag<<endl;
    // unsigned int pos; //2's complement representation of answer in binary
    // pos = 23-45;
    // cout<<"post"<<pos<<endl;

    // cout<<typeid(a).name()<<" "<<typeid(b).name()<<" "<<typeid(c).name()<<" "<<typeid(d).name()<<" "<<typeid(e).name()<<" "<<typeid(f).name()<<endl;

    // age[0] = 23;
    // age[1] = 34;
    // cout<<age[3]<<endl;
    // cout<<temp[0]<<","<<temp[1]<<","<<temp[2]<<endl;

    // strcat(arr_str1, arr_str2);
    // cout<<arr_str1<<endl;
    // cout<<str_1+ str_2<<endl; //overloaded + operator for string 
    // return 0;
    
    // cout<<"in structures"<<endl;
    vector<int> myvec;
    cout<<myvec.size()<<endl;
    myvec.push_back(2);
    cout<<myvec.size()<<endl;
    cow myc(9, "suss", pet);
    myc.display();

    return 0;
}