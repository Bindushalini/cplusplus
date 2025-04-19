#include<iostream>
#include<string>
int main(){
    std::string name;
    std::cout << "Enter your name: "<<std::flush;
    std::cin>> name;
    std::cout<< "Nice to meet you, "<<name<<std::endl;
    std::cout << "Hi there!"<<std::endl;
    return 0;
}