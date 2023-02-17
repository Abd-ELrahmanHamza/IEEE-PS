#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef vector<string> vs;
#define rep(i, v) for (int i = 0; i < v.size(); ++i)
#define readV(v)                       \
    for (int i = 0; i < v.size(); ++i) \
        cin >> v[i];
#define printV(v)                      \
    for (int i = 0; i < v.size(); ++i) \
        cout << v[i] << " ";
#define oo INT_MAX

bool good(ll m, ll h, ll maxW, ll secMaxW)
{
    if (m & 1)
        return (m / 2) * secMaxW + (m / 2 + 1) * maxW >= h;
    return (m / 2) * secMaxW + (m / 2) * maxW >= h;
}

int main()
{
    //    freopen("gcd.in", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, h;
        cin >> n >> h;
        vi v(n);
        readV(v);
        sort(v.begin(), v.end());
        int maxW = v[n - 1], secMaxW = v[n - 2];
        ll l = 0, r = 1e10;
        while (l + 1 < r)
        {
            ll m = (l + r) / 2;
            if (good(m, h, maxW, secMaxW))
                r = m;
            else
                l = m;
        }
        cout << r << endl;
    }
    return 0;
}