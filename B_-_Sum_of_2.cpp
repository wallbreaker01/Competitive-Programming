#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll n,x,a,b,c=0;
    cin >> n >> x ;
    ll s[n];
    vector<ll>v,v2;

    for (ll i = 0 ; i <= n ; i++)
    {
        cin>>s[i];
        v.push_back(s[i]); //taking ellement to another array
    }
    sort(s,s+n); //sorting cz chutor lge boro jug dibo

    ll start=0,end=n-1;
    while(start<end)
    {
        if(s[start]+s[end]==x) //main sum
        {
            c++;
            a=s[start]; //collecting elements for which sum happened
            b=s[end];
            break;
        }
        else if(s[start]+s[end]>x) end--; //beshi hoile end theke ek kore index kombe
        else start++; // kom hole shuru theke ek kore index barbe
    }

    for (ll i = 0 ; i < n ; i++) 
    {
        if(v[i]==a) v2.push_back(i+1); //element er index ber kora
        else if(v[i]==b) v2.push_back(i+1); //same kaj
    }
    if(c==0) cout<<"-1"<<endl;
    else
    {
        for (ll i = 0 ; i < 2 ; i++) cout<<v2[i]<<" ";
    }

}