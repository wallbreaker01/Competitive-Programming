#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll s[3];
    ll sum=0,c=0;
    for (ll i = 0 ; i < 3 ; i++) 
    {
        cin>>s[i];
        //sum+=s[i];
    }
    //cin >> a >>b >> c;
    sort(s,s+3);
    //ll sum=a+b+c;
    if(s[0]==s[1] and s[1]==s[2])
    {
        yes;
        return;
    }
    while(s[0]!= s[1])
    {
        c++;
        s[1]-=s[0];
        if(c>3) break;
    }
    while(s[1]!= s[2])
    {
        c++;
        s[2]-=s[1];
        if(c>3) break;
    }
    if(c<=3) yes;
    else no;

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
