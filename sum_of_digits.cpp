#include<iostream>
using namespace std;

int main(){
    int input_num, sum;
    input_num = sum = 0;
    cout<<"enter 4 digit number"<<endl;
    cin>>input_num;

    if (input_num > 0 && input_num < 9999){
        sum += input_num % 10;
        input_num /= 10;

        if (input_num > 0){
            sum += input_num % 10;
            input_num /= 10;
        }
        if (input_num > 0){
            sum += input_num % 10;
            input_num /= 10;
        }
        if (input_num > 0){
            sum += input_num % 10;
            input_num /= 10;
        }
        cout<< "sum of digits = "<<sum <<endl;
    } 
    else {
        cout<< "invalid number format"<<endl;
    }
    return 0;

}