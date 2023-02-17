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

bool good(int pp, int mm, int m)
{
    return pp >= m && mm >= m && (pp + mm) / 4 >= m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int pp, mm;
        cin >> pp >> mm;
        ll l = 0, r = min(pp, mm) + 1;
        while (l + 1 < r)
        {
            ll m = (l + r) / 2;
            if (good(pp, mm, m))
                l = m;
            else
                r = m;
        }
        cout << l << endl;
    }
    return 0;
}