#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; ++i);
using namespace std;


void fxn()
{
    int n;
    int k;
    cin >> n >> k;
    if(k%2==1)
    {
        cout << "NO" << endl;
        return;
    }
    vector<int> a(n);
    int i;
    rep(i,n){
        a[i] = i+1;
    }
    
}
int main() {
    int t;
    cin >> t;
    while(t--) 
    {
        fxn();
    }
    return 0;
}