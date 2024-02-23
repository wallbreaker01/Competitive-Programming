#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

string find_smallest_word(int n) 
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    vector<string> v;
    for (int i = 0; i < 26; i++) 
    {
        for (int j = 0; j < 26; j++) 
        {
            for (int k = 0; k < 26; k++) 
            {
                if (i + j + k + 3 == n) 
                {
                    v.push_back(string(1, alphabet[i]) + alphabet[j] + alphabet[k]);
                }
            }
        }
    }
    return *min_element(v.begin(), v.end());
}



void solve()
{
    ll n;
    cin >> n;
    cout<<find_smallest_word(n)<<endl; 
    


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
