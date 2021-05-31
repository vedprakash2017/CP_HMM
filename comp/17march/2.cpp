#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v,ans;
    int t,n,vr,i,j,q;
    cin>>t;
    
    for( i =0;i<t;i++) 
    {
        cin>>n;
        for( j=0;j<n;j++)
        {
            cin>>vr;
            v.push_back(vr);
        }
    }
    
    for(q=0;q< ans.size(); q++ )
    {
        cout<<ans[q]<<endl;
    }
    
    return 0;
}