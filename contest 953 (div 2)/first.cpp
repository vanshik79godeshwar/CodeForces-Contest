#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
void solve()
{
    ll i;
    ll n,k;
    cin>>n>>k;
    if(k%2)
    {
        cout<<"NO\n";
        return;
    }
    vector<ll> a(n);
    rep(i,n) a[i]=i+1;
    k/=2;
    ll x=0;
    ll j=n-1;
    for(int i=0;i<n/2;i++)
    {
        x = j-i;
        if(k<=x)
        {
            swap(a[i],a[i+k]);
            k=0;
            break;
        }
        swap(a[i],a[j]);
        k-=x;
        j--;
    }
    if(k)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    rep(i,n) cout<<a[i]<<" ";
    cout<<"\n";
}
int main() 
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
