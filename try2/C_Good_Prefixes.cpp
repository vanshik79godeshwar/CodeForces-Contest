#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int k;
        cin>>k;
        vector<int> a(k);
        for(int i=0;i<k;i++)
            cin>>a[i];
        int mx = INT_MIN;
        int sum = 0;
        int ans = 0;
        for(int i=0;i<k;i++)
        {
            mx = max(mx,a[i]);
            sum += a[i];
            if (sum-mx==mx)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}