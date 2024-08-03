#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        int l;
        cin >> n;
        vector<int> a(n-1);
        for(int i=0; i<n-1; i++) 
        {
            cin >> a[i];
        }
        cin >> l;
        int m = *max_element(a.begin(), a.end());
        cout<<m+l<<endl;
    }
    return 0;
}