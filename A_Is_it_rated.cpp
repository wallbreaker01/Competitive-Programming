#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll a[9999],b[9999],n,c=0;
    cin >> n;
    for (ll i = 0 ; i < n ; i++) 
    {
        cin >> a[i] >> b[i];
        if(a[i]!=b[i]) c=1;
    }
    if(c==1) cout<<"rated"<<endl;

    else
    {
        for (ll i = 0 ; i < n-1 ; i++) 
        {
            if(a[i]<a[i+1]) c=-1;
        }
        if(c==-1) cout<<"unrated"<<endl;
        else cout<<"maybe"<<endl;
    }
}