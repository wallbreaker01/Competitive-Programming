#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    set<char>st;
    ll c=0;
    for (ll i = 0 ; i < s.size() ; i++) 
    {
        st.insert(s[i]);
        c+=st.size();
    }
    cout<<c<<endl;
    


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
