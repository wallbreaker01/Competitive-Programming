#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl


struct trie
{
    map<char,trie*>mp;
    ll c;
    trie()
    {
        c = 0;
    }
};

struct trie *root;
bool flag = 1;
ll mx = 0;


void push(string s)
{
    struct trie *cur = root;
    ll i = 1;
    for (ll j = 0 ; j < s.size() ; j++) 
    {
        if(!cur -> mp.count(s[j])) cur -> mp[s[j]] = new trie();
        cur = cur -> mp[s[j]];
        cur -> c ++;
        mx=max(mx,i* cur ->c);
        i++;
    }
}


int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        root = new trie;
        mx = 0;
        for (ll i = 0 ; i < n ; i++) 
        {
            flag = 1;
            string s;
            cin >> s;
            push(s);
        }
        cout<<mx<<endl;
        
    }
    

}