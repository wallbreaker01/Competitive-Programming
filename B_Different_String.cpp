#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back

void solve()
{
    string s;
    cin >> s;
    for (ll i = 1 ; i < s.size() ; i++) 
    {
        if(s[i]!=s[i-1])
        {
            swap(s[i],s[i-1]);
            yes;
            cout<<s<<endl;
            return;
        }
    }
    no;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
