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

bool solve(vi& arr,int target, int index, int sum){
    if(index == arr.size()){
        return false;
    }
    if(sum == target){
        return true;
    }

    return solve(arr,target,index+1,sum+arr[index]) || solve(arr,target,index+1,sum);
}

int main()
{
//#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
//#endif
    vi arr = {1, 2, 3};
    int target = 3;

    cout<<solve(arr,target,0,0)<<endl;
    return 0;
}