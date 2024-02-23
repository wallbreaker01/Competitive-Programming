#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back


void solve() 
{
    string s;
    cin >> s;
    vector<ll> lw;
    vector<ll> up;
    string la = "qwertyuiopasdfghjklzxcvbnm";
    string ua = "QWERTYUIOPASDFGHJKLZXCVBNM";
    vector<char> a;
    string ans = "";
    ll c = 0;
    for (ll i = 0; i < s.length(); ++i) 
    {
        if (s[i] == 'B' && !up.empty()) 
        {
            a[up.back()] = '_';
            up.pop_back();
        } 
        else if (s[i] == 'b' && !lw.empty()) 
        {
            a[lw.back()] = '_';
            lw.pop_back();
        } 
        else if (s[i] != 'b' && s[i] != 'B') 
        {
            if (la.find(s[i]) != string::npos) 
            {
                lw.push_back(c);
            } 
            else 
            {
                up.push_back(c);
            }
        a.push_back(s[i]);
            ++c;
        }
    }
    for (char i : a) 
    {
        if (i != '_')
        {
            ans += i;
        }
    }
    cout << ans << endl;
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