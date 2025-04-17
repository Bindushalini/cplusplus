#include <iostream>
using namespace std;
int gcd(int a, int b){
    if (a==0) return b;
        
    if (b==0){ return a;}
    if (a==b) return a;
    if (a > b) {
        if (a % b == 0)
            return b;
        return gcd(a - b, b);
    }
    if (b % a == 0)
        return a;
    return gcd(a, b - a);
}
int main()
{
    // Write your code here
    int a,b;
    cin>>a;
    cin>>b;
    int ans=0;
    ans = gcd(a,b);
    cout<<"The greatest common divisor is: "<<ans<<endl;

}