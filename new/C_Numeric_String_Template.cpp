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
    ll i,j,n,m;
    cin>>n;
    vll a(n);
    rep(i,0,n){
        cin>>a[i];
    }

    auto check = [&](const string& s){
        map<ll,char> ic;
        map<char,ll> ci;

        rep(i,0,n)
        {
            char ch = s[i];
            ll num = a[i];
            if(ic.count(num) && ic[num]!=ch){
                return false;
            }
            if(ci.count(ch) && ci[ch]!=num){
                return false;
            }
            ic[num]=ch;
            ci[ch]=num;
        }
        return true;
    };

    cin>>m;
    while(m--){
        string s;
        cin>>s;

        if(s.size()!=n){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<(check(s)?"YES":"NO")<<endl;
        
        // bool flag = true;
        // if(s.size()!=n){
        //     cout<<"NO"<<endl;
        //     flag=false;
        //     continue;
        // }
        // unordered_map<char,ll> mp;
        // for(char ch:s){
        //     mp[ch]=-1;
        // }
        // rep(i,0,n){
        //     if(mp[s[i]]==-1){
        //         mp[s[i]]=i;
        //     }
        //     else{
        //         if(a[i] != a[mp[s[i]]]){
        //             cout<<"NO "<<endl;
        //             flag = false;
        //             break;
        //         }
        //         else{
        //             mp[s[i]]=i;
        //         }
        //     }
        // }
        // if(flag){
        //     cout<<"YES"<<endl;
        // }
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