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
bool good(int m, int availableTime)
{
    return 5 * ((m * (m + 1)) / 2) <= availableTime;
}

int main()
{
    //    freopen("gcd.in", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int availableTime = 240 - k;
    ll l = 0, r = n + 1;
    while (l + 1 < r)
    {
        ll m = (l + r) / 2;
        if (good(m, availableTime))
            l = m;
        else
            r = m;
    }
    cout << l << endl;

    return 0;
}