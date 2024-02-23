#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n, s, r;
    cin >> n >> s >> r;
    ll mx = s -r;
    cout << mx << " " ;
    
    ll avg = r / (n-1) ;
    ll v[n];
    for (ll i = 0 ; i < n-1 ; i++)  v[i]=avg;
    r=r- ((n-1)*avg);

    for (ll i = 0 ; i < n-1 ; i++) 
    {
        if(r)
        {
            v[i]++;
            r--;
        }
        cout<<v[i]<<" ";
    }
    cout<<endl;


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
