#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll mid=n/2;
    if(n%2==0)
    {
        while(mid!=0)
        {
            cout<<mid<<" "<<n<<" ";
            mid--,n--;
        }     
    }
    else
    {
        cout<<mid+1<<" ";
        while(mid!=0)
        {
            cout<<n<<" "<<mid<<" ";
            mid--,n--;
        } 
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
