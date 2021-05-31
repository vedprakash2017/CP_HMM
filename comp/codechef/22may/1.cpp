#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int D,d,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>D>>d>>a>>b>>c;
        int max = D*d;
        if(max>0)
        
        {
        if(max>=42) cout<<3<<endl;
        else if(max>=21) cout<<2<<endl;
        else if(max>=10) cout<<1<<endl;
        else cout<<0<<endl;
        }
        else
        {
             cout<<0<<endl;
        }
    }
    return 0;
}