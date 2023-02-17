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
        int n;
        cin >> n;
        vi v(n);
        readV(v);
        sort(v.begin(), v.end());
        ll red = 0;
        ll blue = v[0];
        int l = 1, r = n - 1;
        bool valid = false;
        while (l <= r)
        {
            if (red > blue)
                valid = true;
            if (l == r)
                blue += v[l++];
            else
            {
                red += v[r--];
                blue += v[l++];
            }
        }
        if (red > blue)
            valid = true;
        cout << (valid ? "YES\n" : "NO\n");
    }
    return 0;
}