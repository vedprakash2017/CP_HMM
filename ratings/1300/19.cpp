#include <bits/stdc++.h>
using namespace std;
int main()
{

    int ex,ee,n,y;
    int c=0,max = 0;
    cin>>n;
    while(n--)
    {
        cin>>ex>>ee;
        c = c-ex+ee;
        if(c>max) max = c;
    }   
    cout<<max;
    return 0;
}