#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int ans(ll n)
{
    ll sum=0;
    while(n)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

int main()
{
    int k;
    cin >> k;
    ll c=0;
    for(ll i=19;i<=100000000;i=i+9)
    {
        if(ans(i)==10) 
        {
            c++;
            if(c==k) cout<<i<<endl;
        }
    }

    // int a=k%10;
    // int b=10-a;
    // cout<<k<<b<<endl;
        
}