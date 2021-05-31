#include <bits/stdc++.h>
using namespace std;
int main()
{
    string v;
    int t,n,vr,i,j,q,k;
    cin>>t;
    vector <string> ans;
    for( i =0;i<t;i++) 
    {
        cin>>n;
        cin>>k;
        cin>>v;
        int c = 0;
        for(int u=0;u<n/2;u++)
        {
            if( v[u] != v[n-1-i])
                c++;
        }
        string x = "Case #"+to_string(i+1)+": "+to_string(abs(k-c));
        ans.push_back(x);
        cout<<"ved";
    }
    cout<<"v";
    for(q=0;q< ans.size(); q++ )
    {
        cout<<"x";
        cout<<ans[q]<<endl;
    }
    
    return 0;
}