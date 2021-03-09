#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,j,i,n;
    for ( n = 0; n <25; n++)
    {
        int x;
        cin>>x;
        if(x==1) m=n;
    }
    cout<<abs(m/5-2)+abs(m%5-2);
    
}