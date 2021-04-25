#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    // cout<<(k+l)/nl<<endl;
    cout<<min( {(k*l)/nl,d*c, p/np })/n;
    return 0;
}