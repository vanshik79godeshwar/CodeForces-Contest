#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define rep1(i, n) for (i = 0; i < n; i++)
#define rep(i, k, n) for (i = k; i < n; i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sort(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define MOD 1000000007
#define INF 1e18
#define endl "\n"
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
void solve()
{
    ll n,i,j;
    cin >> n;
    vll a(n);
    rep1(i,n)
    {
        cin>>a[i];
    }
    sort(a);
    vll vk1;
    vector<bool> vk(n,false);
    for(i=1;i<n;i++)
    {
       if(a[i]==a[i-1])
       {
           vk[a[i]-1]=true;
       }
    }
    vk1.pb(a[0]);
    for(i=1;i<n;i++)
    {
       if(a[i]!=a[i-1])
       {
           vk1.pb(a[i]);
       }
    }
    vll temp(vk1.size(),0);
    ll ans=1;
    i=0,j=1;
    for(i=1;i<vk1.size();i++){
        j=i;
        if(vk[vk1[i]-1]){
            ans++;
            temp[j]=1;
        }
        else{
            if(temp[j-1]==1){
                ans++;
            }
            else{
                temp[j]=1;
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
//#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
//#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        //Vanshik is GOAT
        solve();
    }
    return 0;
}