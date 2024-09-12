#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll target;
    cin>>target;
    vector<ll>v;
    for(ll i=0; i<4; i++)
    {
        cin>>v[i];
    }
    vector<ll>v2;
    for(ll i=0; i<v.size(); ++i)
    {
        for(ll j=1; j<v.size(); ++j)
        {
           if(v[i]+v[j]==target)
           {
            v2.push_back(i);
            v2.push_back(j);
           }
        }
    }
    for(ll i=0; i<2; ++i) cout<<v2[i]<<',';
}
