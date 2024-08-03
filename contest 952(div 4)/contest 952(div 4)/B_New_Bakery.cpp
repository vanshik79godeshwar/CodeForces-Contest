#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) 
    {
        long long n,a,b;
        cin >> n >> a >> b;
        long long c = b-a;
        if(b<=a)
        {
            cout<<n*a<<endl;
        }
        else if (c>=n)
        {
            cout<<b*(b+1)/2 - (b-n)*(b-n+1)/2<<endl;
        }
        else
        {
            cout<<b*(b+1)/2 - a*(a+1)/2 + (n-c)*a<<endl;
        }
    }
    return 0;
}