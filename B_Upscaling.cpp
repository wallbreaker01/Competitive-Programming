#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back

void solve()
{
    ll n;
    cin>>n;
    for (int i = 0; i < 2 * n; ++i) 
    {
        for (int j = 0; j < 2 * n; ++j)
        {
            if ((i / 2 + j / 2) % 2 == 0) 
            {
                cout << "#";
            } 
            else 
            {
                cout << ".";
            }
        }
    cout << endl;
    }
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
