#include <bits/stdc++.h>
using namespace std;
int main()
{
    int min=INT_MIN,max = INT_MAX,n,c=0,y;
    cin>>n;
    cin>>min;
    max = min;
    n--;
    while(n--)
    {
        cin>>y;
        if(y<min) { min=y; c++;}
        else if(y>max) { max = y; c++;}
    }
    cout<<c;
    return 0;
}