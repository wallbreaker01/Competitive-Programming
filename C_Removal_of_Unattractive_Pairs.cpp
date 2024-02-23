#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> v(26, 0);
    for (char c : s) 
    {
        v[c - 'a'] += 1;
    }
    ll maxv = *max_element(v.begin(), v.end());
    ll result = (2 * maxv - n) > 0 ? (2 * maxv - n) : (maxv > n / 2 ? 1 : (n % 2 == 1 ? 1 : 0));
    cout << result << std::endl;



}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
