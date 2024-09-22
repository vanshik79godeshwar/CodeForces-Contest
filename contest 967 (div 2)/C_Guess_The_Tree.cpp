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

int query(int i,int j)
{
    cout<<"? "<<i<<" "<<j<<endl;
    cout.flush();
    int x;
    cin>>x;
    return x;
}

void solve()
{
    int n,i,j,k;
    cin >> n;
    vvi edges;

    rep(i,2,n+1)
    {
        j=1;
        while(true)
        {
            int x = query(j,i);
            if(x==j) break;
            j = x;
        }
        edges.pb({i,j});
    }
    cout<<"! ";
    for(auto x:edges)
    {
        cout<<x[0]<<" "<<x[1]<<" ";
    }
    cout.flush();
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