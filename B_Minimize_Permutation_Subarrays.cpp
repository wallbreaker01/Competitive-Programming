#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n,x=-1,y=-1,mx=0;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        if(s[i]==1) x=i+1;
        else if(s[i]==2) y=i+1;
        if(s[mx]<s[i]) mx=i;
    }
    mx++;
    if(x<mx and y<mx)
    {
        if(x>y) cout<<x<<" "<<mx<<endl;
        else cout<<y<<" "<<mx<<endl;
    }
    else if(x>mx and y>mx)
    {
        if(x>y) cout<<y<<" "<<mx<<endl;
        else cout<<x<<" "<<mx<<endl;
    }
    else cout<<n<<" "<<n<<endl;
    


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
