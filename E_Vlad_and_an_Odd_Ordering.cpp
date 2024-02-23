#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{ 
    int n, k;
    cin >> n >> k;
    int i = 1;
    while (true) 
    {
        int cur = n / 2 + (n & 1);
        if (cur >= k) 
        {
            cout << (2 * k - 1) * i << endl;
            break;
        } 
        else 
        {
            k -= cur;
            i *= 2;
            n /= 2;
        }
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
