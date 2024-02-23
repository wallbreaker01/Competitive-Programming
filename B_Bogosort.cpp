#include<bits/stdc++.h>
#include<string.h>
typedef long long int ll;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int s[n];
    for (int i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
    }
    sort(s,s+n,greater<int>());
    for (int i = 0 ; i < n ; i++) 
    {
        cout<<s[i]<<" ";
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
