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
    int n;
    cin >> n;
    vi v(n);
    readV(v);
    int l = 0, r = n - 1;
    int s = 0, d = 0, turn = 0;

    while (l <= r)
    {
        if (v[l] > v[r])
        {
            if (turn)
                d += v[l++];
            else
                s += v[l++];
        }
        else
        {
            if (turn)
                d += v[r--];
            else
                s += v[r--];
        }
        turn = !turn;
    }
    cout << s << " " << d << endl;

    return 0;
}