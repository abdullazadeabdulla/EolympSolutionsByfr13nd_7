#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll y = lcm(b, d);
    a *= (y / b);
    c *= (y / d);
    ll x = a + c;
    ll n = gcd(x, y);
    x /= n, y /= n;
    if(x == y)
        cout << "1" << endl;
    else
        cout << x << " " << y << endl;


}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}