#include<iostream>

void check_balance(int arr1[][3], int no_rows){
    bool not_found = false;
    for(int j=0;j<3;j++){
        int sum = 0;
        for(int i=0;i<no_rows;i++)
        {
            sum += arr1[i][j];
        }
        if(sum != 0){
            not_found = true;
            break;
        }
    }
    if(not_found == true){
        std::cout<<"NO"<<std::endl;
    }else{
        std::cout<<"YES"<<std::endl;
    }
}
int main(){
    int n = 0;
    std::cin>>n;
    int input_arr[n][3] = {0};
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            std::cin>>input_arr[i][j];
        }
    }
    check_balance(input_arr, n);
}