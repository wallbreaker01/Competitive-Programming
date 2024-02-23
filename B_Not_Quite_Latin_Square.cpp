#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    vector<string>s(3);
    for(ll i=0; i<3; i++) cin >> s[i];
    ll r = -1,c = -1;
    for(ll i = 0 ; i < 3 ; i++)  
    {
        for(ll j = 0 ; j < 3 ; j++) 
        {
            if(s[i][j] == '?') 
            {
                r = i;
                c = j;
            }
        }
    }
    set<char>v;
    v.insert('A');
    v.insert('C');
    v.insert('B');
    for(ll i = 0 ; i < 3 ; i++) 
    {
        for(ll j= 0 ; j < 3 ; j++) 
        {
            if(i == r or j == c) v.erase(s[i][j]);
        }
    }
    cout<<*v.begin()<<endl;


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
