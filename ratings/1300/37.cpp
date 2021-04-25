#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x,y;
    cin>>x>>y;
    long long int m = x/2;
    long long int ans=0;
    if(x%2 == 0)
        {
            if(y<=m) 
            {
                ans = 1+2*(y-1);

            }
            else
            {
                y = y-m;
                ans=2+2*(y-1);
            }
        }
    else
    {
            if(y<=m+1) 
            {
                ans = 1+2*(y-1);

            }
            else
            {
                y = y-m-1;
                ans =2+2*(y-1);
            }
    }
    cout<<ans;
    return 0;

}