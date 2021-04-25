#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,max=0,i,y;
    cin>>n>>m;
    int yy = n;
    while (n--)
    {
        cin>>y;
        int max1;
        if(y%m >=1) {max1 = y/m+1;}
        else    {
            max1 = y/m;
        }
        if(max1>=max) { max = max1; i = yy-n;}
        /* code */
    }
    cout<<i;
    
    return 0;
}