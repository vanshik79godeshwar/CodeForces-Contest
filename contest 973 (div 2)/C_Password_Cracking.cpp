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
    int n;
    // cout<<"enter n : ";
    cin>>n;

    cout<<"? 0"<<endl;
    int a;
    cin>>a;
    cout.flush();
    if(a==0){
        string s(n,'1');
        cout<<"! "<<s<<endl;
        cout.flush();
        return;
    }
    bool start=false,end=false;
    string ans = "0";
    while((start==false || end==false) && ans.size()<n){
        while(end==false && ans.size()<n){    
            int a1,a2;

            cout<<"? "+ans+"1"<<endl;
            cin>>a1;
            cout.flush();

            if(a1==1){
                ans+="1";
                continue;
            }
            else{
                cout<<"? "+ans+"0"<<endl;
                cin>>a2;
                cout.flush();
                if(a2==1){
                    ans+="0";
                }
                else{
                    end=true;
                }
            }
        }

        while(start==false && ans.size()<n){    
            int a1,a2;

            cout<<"? 1"+ans<<endl;
            cin>>a1;
            cout.flush();

            if(a1==1){
                ans="1"+ans;
                continue;
            }
            else{
                cout<<"? 0"+ans<<endl;
                cin>>a2;
                cout.flush();
                if(a2==1){
                    ans="0"+ans;
                }
                else{
                    start=true;
                }
            }
        }
    }

    cout<<"! "<<ans<<endl;
    cout.flush();
}
int main()
{
//#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
//#endif
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    int t;
    // cout<<"enter t : ";
    cin >> t;
    while (t--)
    {
        //Vanshik is GOAT
        solve();
    }
    return 0;
}