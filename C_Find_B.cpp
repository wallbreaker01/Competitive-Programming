
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back



void solve()
{
    ll n, q;
    cin >> n >> q;
    ll s[n],v[n],pre[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        pre[i] = pre[i - 1] + s[i];
        if(s[i]==1) v[i] = v[i - 1] + 2;
        else v[i] = v[i - 1] + 1;
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (l == r)
        {
            no;
            continue;
        }
        ll sum1 = pre[r] - pre[l - 1];
        ll sum2 = v[r] - v[l - 1];
        if (sum1 > sum2) yes;
        else no;
    }
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
