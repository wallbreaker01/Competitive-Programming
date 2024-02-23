#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

int main()
{
    
    ll n , ans;
    for ( ll i = 1 ; i <= 5 ; i++)
    {
        for ( ll j = 1 ; j <= 5 ; j++)
        {
            cin >> n;
            if(n==1) ans=abs(i-3)+abs(j-3);
        }
    }
    cout<<ans<<endl;
}
