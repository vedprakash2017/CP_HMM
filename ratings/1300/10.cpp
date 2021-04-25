#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    char  q2='0';
    cin>>n;
    for( int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        if(q2 == x) c++;
        q2 = x;
    }
    cout<<c;
}