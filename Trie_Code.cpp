#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fastio                        \
{                                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
}


class Trie
{
    public :
        class node
        {
            public :
                bool end;
                node*next[26];
                node()
                {
                    end=false;
                    for (ll i = 0 ; i < 26 ; i++) 
                    {
                        next[i]=NULL;
                    }
                }
        };
    node* trie;
    Trie()
    {
        trie=new node(();)
    }    
    void insert(string word)
    {
        ll i=0;
        node* it=trie;
        while(i<word.size())
        {
            if(it->next[word[i]-'a']==NULL) it->next[word[i]-'a']==new node();
            it=it->next[word[i]-'a'];
            i++;
        }
        it->end=true;

    }
    void search(string word)
    {
        ll i=0;
        node* it=trie;
        while(i<word.size())
        {
            if(it->next[word[i]-'a']==NULL) return false;
            it=it->next[word[i]-'a'];
            i++;
        }
        return it->end;
    }
};






int main()
{
    fastio
    Trie *myTrie=new Trie();
    vector<string>words={"sowmik","roy"};
    for(auto x : words)
    {
        myTrie->insert(x);
    }
    if(myTrie->search("pulok"))
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
        
    }
    

}