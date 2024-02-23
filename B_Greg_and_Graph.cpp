#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
const ll N=1000;
const ll INF=1e9+10;
ll dist[N][N];


int main()
{
    ll n;
    cin >> n;
    for( ll i = 1 ; i <= n ; i++)
    {
        for( ll j = 1 ; j <= n ; j++) cin>>dist[i][j];
    }
    vector<ll>del_order(n);
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>del_order[i];
    }
    reverse(del_order.begin(),del_order.end());
    vector<ll>ans;
    for( ll k = 0 ; k < n ; k++)
    {
        ll k_v=del_order[k];
        for( ll i = 1 ; i <= n ; i++)
        {
            for( ll j = 1 ; j <= n ; j++)
            {
                ll new_dist=dist[i][k_v]+dist[k_v][j];
                dist[i][j]=min(dist[i][j],new_dist);
            }
        }
        ll sum=0;
        for (ll i = 0 ; i <= k ; i++) 
        {
            for (ll j = 0 ; j <= k ; j++)
            {
                sum+=dist[del_order[i]][del_order[j]];
            }
        }
        ans.pb(sum);
    }
    reverse(ans.begin(),ans.end());
    for(auto val : ans)
    {
        cout<<val<<endl;
    }



}