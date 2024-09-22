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
    ll n,m,mx,i,j;
    cin>>n>>m;
    vll a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a);
    mx=a[n-1];
    ll mn=a[0],temp=0;
    rep(i,0,m-1){
        char c;
        ll l,r;
        cin>>c>>l>>r;
        if(l<=mn && r>=mx){
            if(c=='-') temp--;
            else temp++;
            cout<<mx+temp<<" ";
            continue;
        }
        else if(l<=mn && r<=mn){
            cout<<mx+temp<<" ";
            continue;
        }
        else if(l>=mx && r>=mx){
            cout<<mx+temp<<" ";
            continue;
        }
        ll left = 0, right = n - 1,la,lr;
        ll ans = -1;
        while (left <= right) {
            ll mid = left + (right - left) / 2;
            if (a[mid] >= l) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        la = ans;

        left = 0, right = n - 1;
        ans = -1;
        while (left <= right) {
            ll mid = left + (right - left) / 2;
            if (a[mid] <= r) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        lr = ans;
        if(c == '+'){
            for(ll k=la;k<=lr;k++){
                a[k]++;
            }
        }
        else{
            for(ll k=la;k<=lr;k++){
                a[k]--;
            }
        }
        sort(a);
        mx = a[n-1];
        mn = a[0];
        cout << mx + temp <<" ";
    }
    cout<<endl;
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