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

class dsu{
    public:
    vector<int> parent;
    vector<int> size;
    int n;
    dsu(int n){
        this->n = n;
        parent.resize(n+1);
        size.resize(n+1);
        for(int i=0;i<n;i++){
            parent[i] = i;
            size[i] = 1;
        }
    }

    int find(int a){
        if(parent[a]==a){
            return a;
        }
        return parent[a] = find(parent[a]);
    }

    void unite(int a,int b){
        a = find(a);
        b = find(b);
        if(a!=b){
            if(size[a]<size[b]){
                swap(a,b);
            }
            parent[b] = a;
            size[a] += size[b];
        }
    }
};


void solve()
{
    int n,i,j;
    cin>>n;
    dsu d(n);
    vi a(n);
    rep(i,0,n){
        int x; cin>>x;
        a[i] = x;
        d.unite(i+1,x);
    }
    string s;
    cin>>s;

    vi black;
    unordered_map<int,int> m;
    rep(i,0,n){
        if(s[i]=='0'){
            black.pb(a[i]);
            m[d.find(a[i])]++;
        }
    }
    vi ans(n);
    rep(i,0,n){
        ans[i] = m[d.find(i+1)];
    }

    rep(i,0,n){
        cout<<ans[i]<<" ";
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