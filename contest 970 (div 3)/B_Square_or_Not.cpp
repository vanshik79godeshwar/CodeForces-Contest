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

bool perfectSquare(int n)
{
    int x = sqrt(n);
    return x * x == n;
}

void solve()
{
    int n,i,j;
    cin>>n;
    string s;
    cin>>s;
    if(!perfectSquare(n)){
        cout<<"No"<<endl;
        return;
    }
    int x = sqrt(n);
    string first = s.substr(0,x);
    string last = s.substr(n-x,x);
    rep(i,0,x){
        if(first[i]=='0' || last[i]=='0'){
            cout<<"No"<<endl;
            return;
        }
    }

    s = s.substr(x,n-x-x);

    rep(i,0,x-2){
        string str = s.substr(i*x,i*x + x);
        if(str[0]=='0' || str[x-1]=='0'){
            cout<<"No"<<endl;
            return;
        }
        rep(j,1,x-1){
            if(str[j]=='1'){
                cout<<"No"<<endl;
                return;
            }
        }
    }
    cout<<"Yes"<<endl;
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