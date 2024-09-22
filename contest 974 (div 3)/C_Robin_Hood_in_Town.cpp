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
    ll n,i,j,sum=0;
    ll avg,target;
    cin>>n;
    
    vll a(n);
    rep(i,0,n){
        cin>>a[i];
        sum+=a[i];
    }

    if(n==1){
        cout<<-1<<endl;
        return;
    }
    // cout<<"Sum: "<<sum<<endl;
    // avg=ceil(sum/n);
    // // cout<<"Avg: "<<avg<<endl;
    // target = ceil((sum)/(2*n));
    sort(a);
    ll posn = (n/2)+1;
    if(posn-1==n-1){
        cout<<-1<<endl;
        return;
    }

    if(2*n*a[posn-1]<sum){
        cout<<0<<endl;
        return;
    }

    cout<< 1-(sum - 2*n*a[posn-1]) <<endl;

    // if(a[posn-1]<target){
    //     cout<<0<<endl;
    //     return;
    // }
    // ll ans = 0;
    // double act_avg = a[posn-1]*2+1;
    // // cout<<"Act_avg: "<<act_avg<<endl;
    // cout<<(act_avg - avg)*n<<endl;
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