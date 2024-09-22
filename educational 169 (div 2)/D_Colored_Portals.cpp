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
    ll n,q,i,j,k;
    vector<string> possible = {"BG","BR","BY","GR","GY","RY"};
    cin >> n>>q;
    vector<string> s(n);
    rep(i,0,n) cin>>s[i];

    auto connected = [&](ll x,ll y){
        string a=s[x-1],b=s[y-1];
        for(char ch1:a){
            for(char ch2:b){
                if(ch1==ch2) return true;
            }
        }
        return false;
    };

    auto intermediate = [&](ll x,ll y){
        string a=s[x-1],b=s[y-1];
        vector<string> c;
        for(string str:possible){
            if(str!=a && str!=b) c.push_back(str);
        }

        rep(i,0,n){
            rep(j,0,3){
                if(s[i]==c[j]){
                    return i+1;
                }
            }
        }
        delete &c;
        return static_cast<long long>(-1);
    };


    rep(i,0,q){
        ll a,b;
        cin>>a>>b;
        ll start=min(a,b);
        ll end=max(a,b);
        if(start==end){
            cout<<"0"<<endl;
            continue;
        }
        if(connected(start,end)){
            cout<<end-start<<endl;
            continue;
        }

        ll mid=intermediate(start,end);
        if(mid==-1) cout<<"-1"<<endl;
        else{
            if(mid>start && mid<end){
                cout<<end-start<<endl;
            }
            else{
                cout<<abs(mid-start) + abs(mid-end)<<endl;
            }
        }
        
    }
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