#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<algorithm>
#include<string>
#include<map>


int main(){
    std::map<char,int> data;
    std::string input_str;
    int count = 0;
    std::getline(cin, input_str);
    size_t l_index = input_str.find_first_of("{");
    if(l_index != std::string::npos){input_str = input_str.erase(l_index,1);}
    int r_index = (input_str.find_last_of("}"));
    if(r_index != std::string::npos){input_str = input_str.erase(r_index,1);}
    for(int i=0;i<input_str.length();i++)
    {
        if(input_str[i] != ',' && input_str[i] != ' ' && data.find(input_str[i])==data.end()){
            data[input_str[i]]++;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}