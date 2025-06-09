#include<iostream>
#include<string>
int main(){
    std::string input_str;
    std::cin>>input_str;
    int count = input_str.length();
    long int freque[256] = {0};
    for(char i:input_str){
        freque[static_cast<int>(i)]++;
        
    }
    for(int j=0;j<256;j++){
        if(freque[j] > 1)
        {
            count = count - (freque[j] - 1);
            //std::cout<<char(j)<<" "<<freque[j]<<std::endl;
        }
    }
    //std::cout<<count<<std::endl;
    if(count%2 ==0){std::cout<<"CHAT WITH HER!";}
    else{std::cout<<"IGNORE HIM!";}

}