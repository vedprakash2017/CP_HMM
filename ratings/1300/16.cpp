#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    vector <int> x(d,1);
    if(k==1 || l == 1|| m==1||n==1)
        {cout<<d; return 0;}
    for(int i=k-1;i<d;i+=k)
        x[i] = 0;
    for(int i=l-1;i<d;i+=l)
        x[i] = 0;
    for(int i=m-1;i<d;i+=m)
        x[i] = 0;
    for(int i=n-1;i<d;i+=n)
        x[i] = 0;
    cout<<count(x.begin(),x.end(),0);
    return 0;
}