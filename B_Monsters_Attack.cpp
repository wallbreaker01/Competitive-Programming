#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll s[n], v[n];
    for (ll i = 1; i <= n; i++)
        cin >> s[i];
    multiset<pair<ll, ll>> set;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        set.insert({abs(v[i]), s[i]});
    }
    ll c = 0;
    ll x = 1;
    while (!set.empty())
    {
        int cur = k;
        while (!set.empty() and cur > 0)
        {
            pair<int, int> p = *set.begin();
            if (p.first - c <= 0) x = 0;
            set.erase(set.begin());
            if (cur >= p.second) cur -= p.second;
            else
            {
                set.insert({p.first, p.second - cur});
                cur = 0;
                break;
            }
        }
        c++;
    }
    if(x) yes;
    else no;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
