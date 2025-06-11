#include<iostream>
#include <stdlib.h>
#include<limits>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int tot_levels;
    cin>>tot_levels;
    int arr[tot_levels] = {0};
    int j=0;
    
    do{
        int input_values_length;
        cin>>input_values_length;
        for(int i=0;i<input_values_length;i++){
            int val;
            cin>>val;
            int index = val-1;
            if(arr[index]!=1){
                arr[index] = 1;
            }
        }
        j++; 
    }
    while(j<2);

    
    bool not_found = false;
    for(int i=0;i<tot_levels;i++){
        //cout<<arr[i]<<" "<<i<<endl;
        if(arr[i] != 1){
            not_found = true;
            break;
        }
    }
    if(not_found){cout<<"Oh, my keyboard!"<<endl;}
    else {cout<<"I become the guy."<<endl;}

}