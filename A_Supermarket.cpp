#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll n,m;
    cin >> n >> m ;
    double a,b,ans,minn=101;
    for (ll i = 0 ; i < n ; i++) 
    {
        cin >> a >> b;
        ans=a/b;
        minn=min(ans,minn);
    }
    // cout<<minn*m<<endl;
    printf("%0.8lf",minn*m);
}