#include<iostream>
#include<unordered_map>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    std::unordered_map<int,int> b_count;
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        b_count[a[i]]++;
    }
    for(int i=0;i<n;i++){
        count += b_count[b[i]];
    }
  
    cout<<count<<endl;
    return 0;
}