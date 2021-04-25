#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n,nn=7,y,i;
    cin>>n;
    while(nn--)
    {
        cin>>y;
        v.push_back(y);
    }
    i = 0;
    while (n>0)
    {
        n-=v[(i++)%7];
    }
    cout<<(i-1)%7+1;
    return 0;
}