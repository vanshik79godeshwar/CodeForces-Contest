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
// #define sort(x) sort(all(x))
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

bool compareBySecond(const pair<ll,ll>& a, const pair<ll,ll>& b) {
    return a.second < b.second;
}

void solve()
{
    ll i, j, n, k;
    ll m=n;
    cin >> n >> k;
    vector<pair<ll,ll>> a;
    // total possible , cost
    rep(i,0,n){
        ll x, y;
        cin >> x >> y;
        a.pb(mp(max(x, y), min(x, y)));
    }

    sort(a.begin(), a.end(), compareBySecond); 

    ll ans = 0;
    ll temp1=0,temp2=0,temp3=0,sum=0;
    rep(i,0,n){
        temp1=a[i].first*a[i].second;
        cout<<"temp1: "<<temp1<<endl;
        temp3 = a[i].first + a[i].second;
        cout<<"temp3: "<<temp3<<endl;
        if(ans+temp3 >= k){
            temp2 = k-ans;
            ll c1=a[i].first;
            ll c2=a[i].second;
            ll c3 = c1-c2+1;
            if(ans+c3>k){
                sum += c3*c2;
                ll c4 = c1-c3;
                ll possible = c4*
            }
            else{
                sum += c3*c2;
            }
        }
        else{
            ans+=temp3;
            sum+=temp1;
        }
        cout<<"ans: "<<ans<<endl;
    }
    cout<<sum<<endl;
    cout<<endl<<endl;
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