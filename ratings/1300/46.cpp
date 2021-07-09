#include <bits/stdc++.h>
using namespace std;
int main()
{   int n,m;
int t= n;
if(m>n) m=n;
cin>>n>>m;
    int x,sum=0;
    vector <int> v;
        for(int i =0 ;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
    sort(v.begin(),v.end());
    for(int j=0;j<m;j++)
    {
        sum+=v[j];
    }
    cout<<abs(sum);
    
}