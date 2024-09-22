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

void solve() {
    ll n, d, k, i, j;
    cin >> n >> d >> k;

    map<int, int> l, r;

    rep(i, 0, k) {
        int x, y;
        cin >> x >> y;
        l[x]++;
        r[y]++;
    }

    int ob1 = 0, ob2 = 0, ob1ind = 1, ob2ind = 1, total = 0;

    rep(i, 1, d + 1) {
        if (l.find(i) != l.end()) {
            total += l[i];
        }
    }

    ob1 = ob2 = total;

    rep(i, 2, n - d + 2) {
        if (l[i + d - 1]!=0) {
            total += l[i + d - 1];
        }
        if (r[i - 1]!=0) {
            total -= r[i - 1];
        }
        if (total > ob1) {
            ob1 = total;
            ob1ind = i;
        }
        if (total < ob2) {
            ob2 = total;
            ob2ind = i;
        }
    }

    cout << ob1ind << " " << ob2ind << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
