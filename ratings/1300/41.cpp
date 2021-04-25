#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,t=0;
    cin>>n>>m;

    vector <int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < m; i++)
    {
        if(i+1<m) {
            if(v[i]>v[i+1] ) {t+=n;continue;}
            else continue;
        }
        else
        t+=v[i];
    }

    cout<<t-1;
    
    
    return 0;
}