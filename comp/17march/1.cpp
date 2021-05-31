#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v,ans;
    vector<vector<int>> anssss;
    int t,n,vr,i,j,q;
    unordered_map <int,int> m;
    cin>>t;
    
    for( i =0;i<t;i++) 
    {

        cin>>n;
        for( j=0;j<n;j++)
        {
            cin>>vr;
            v.push_back(vr);
            m[vr]++;
        }
        for( auto x : m)
        {
            if(x.second>0)
            {
                ans.push_back(x.first);
                x.second--;
            }
        }

    }
    for(int w=0; w<anssss.size(); w++)
    for(q=0;q< anssss[w].size(); q++ )
    {
        cout<<anssss[w][q]<<endl;
    }
    
    return 0;
}