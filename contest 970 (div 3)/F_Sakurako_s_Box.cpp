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

ll mod_exp(ll base, ll exp, ll mod) {
    ll result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) { 
            result = (result * base) % mod;
        }
        exp = exp >> 1;  
        base = (base * base) % mod;  
    }
    return result;
}

ll mod_inverse(ll Q, ll mod) {
    return mod_exp(Q, mod - 2, mod);
}

void solve()
{
    int n,i,j; cin>>n;
    vll a(n);
    rep(i,0,n) cin>>a[i];
    ll sum=0;
    for (int i = 0; i < n - 1; i++) {
        sum += (a[i] % MOD) * ((accumulate(a.begin() + i + 1, a.end(), 0LL)) % MOD);
        sum %= MOD;
    }
    // ll P,Q;
    // P = sum;
    // Q = n*(n-1)/2;
    // ll g = __gcd(P,Q);
    // P/=g;
    // Q/=g;
    ll  p,q;
    p = sum;
    q = n*(n-1)/2;
    q %= MOD;
    // ll g = __gcd(p,q);
    // p/=g;
    // q/=g;
    q = mod_inverse(q,MOD);

    cout<<(p*q)%MOD<<endl;
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