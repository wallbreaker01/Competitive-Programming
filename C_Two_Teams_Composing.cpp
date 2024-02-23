#include<bits/stdc++.h>
#include<string.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll s[n];
    for (int i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
    }
    sort(s,s+n);
    ll count=1,count2=1,ans,max=1;
    for (int i = 0 ; i < n-1 ; i++) 
    {
        if(s[i]!=s[i+1]) count++;
        if(s[i]==s[i+1]) count2++;
        if(max<count2) max=count2;
        if(s[i]!=s[i+1]) count2=1;
        

    }
    if(max<count) cout<<max<<endl;
    else if(max>count) cout<<count<<endl;
    else cout<<max-1<<endl;
    count=1, count2=1;

    


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
