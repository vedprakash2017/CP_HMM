#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>> v;
    int n,nn,x,y;
    cin>>nn;
    n = nn;
    while(nn--)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    int c,c1=0;
    for(auto p:v)
    {
     c=0;

    for(auto p1:v)
    {
        if(p.first < p1.first && p.second == p1.second)
            {c++; break; }
    }
    for(auto p1:v)
    {
        
        if(p.first > p1.first && p.second == p1.second)
            {c++; break; }
    }
    for(auto p1:v)
    {
        
        if(p.first == p1.first && p.second < p1.second)
            {c++; break; }
    }
    for(auto p1:v)
    {
        
        if(p.first == p1.first && p.second > p1.second)
            {c++; break; }
    }
    if(c==4) c1++;  
    }
    cout<<c1;
    return  0;
}