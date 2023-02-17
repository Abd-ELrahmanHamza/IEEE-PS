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

int main()
{
    //    freopen("gcd.in", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, d;
    cin >> n >> d;
    vi v(n);
    readV(v);
    int l = 0, r = 0;
    ll res = 0;
    while (r < n - 1 || l < n - 1)
    {
        while (r < n - 1 && v[r + 1] - v[l] <= d)
            r++;
        ll numElements = r - l;
        if (numElements >= 2)
            res += (numElements * (numElements - 1)) / 2;
        l++;
    }
    cout << res;

    return 0;
}