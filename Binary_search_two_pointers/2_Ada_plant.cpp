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

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vll v(n);
        readV(v);
        ll l = 0, r = 0;
        ll maxH = LONG_LONG_MIN;
        multiset<ll> currentPlant;
        while (r < n)
        {
            while (r - l - 1 <= k && r < n)
            {
                currentPlant.insert(v[r++]);
            }
            maxH = max(maxH, abs(*prev(currentPlant.end()) - *currentPlant.begin()));
            currentPlant.erase(currentPlant.find(v[l++]));
        }
        cout << maxH << endl;
    }
    return 0;
}