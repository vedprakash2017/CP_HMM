#include <bits/stdc++.h>

using namespace std;
int main()
{
    int l,r,n;
    cin>>n;
    int x = n, l1=0,r1 = 0;
    while(n--)
    {
        cin>>l>>r;
        if(l==1) l1++;
        if(r==1) r1++;
    }
    cout<<min(l1,x-l1)+min(r1,x-r1);

}