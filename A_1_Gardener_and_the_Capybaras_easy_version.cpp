#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    string s;
    cin >> s;
    ll l=s.size();
    // if(s[0]==s[1])
    // {
    //     cout<<s[0]<<" "<<s[1]<<" ";
    //     for( ll i = 2 ; i < l ; i++) cout<<s[i];
    //     cout<<endl;
    // }
    // else if(s[0]=='a' && s[1]=='b')
    // {
    //     if(l==3) cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<endl;
    //     else
    //     {
    //         cout<<s[0]<<" ";
    //         for( ll i = 1 ; i < l-1 ; i++) cout<<s[i];
    //         cout<<" ";
    //         cout<<s[l-1]<<endl;
    //     }
    // }
    // else
    // {
    //     if(l==3) cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<endl;
    //     else
    //     {
    //         cout<<s[0]<<" "<<s[1]<<" ";
    //         for( ll i = 2 ; i < l ; i++) cout<<s[i];
    //         cout<<endl;
    //     }
    // }
    for (ll i = 1; i < l-1 ; i++)
    {
        if (s[i] == 'a')
        {
            cout << s.substr (0, i) << " " << 'a' << " " << s.substr (i + 1, l - i - 1) << endl;
            return;
        }
    }
    cout << s[0] << " " << s.substr (1, l - 2) << " " << s.back () << endl;
    


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
