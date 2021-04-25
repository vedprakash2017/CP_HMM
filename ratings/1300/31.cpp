#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans,y,yy,sum=0;
    cin>>n;
    yy = n;
    while(n--)
    {
        cin>>y;
        sum+=y;
    }
    ans = 1;
    while(ans++)
    {
        if( (sum+ans)%(yy+1) != 1) {
            break;
        } 
    }
    cout<<ans;
    return 0;
}