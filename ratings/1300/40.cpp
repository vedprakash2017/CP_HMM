#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,y,c=0;
    cin>>n;
    int nn = n;
    while( nn--)
    {
        cin>>y;
        if(y==5) c++;
    }

    if( n-c > 0) 
    {
        if(c<9) cout<<0;
        else{
            int ss = (c/9)*9;
            for (int i = 0; i < ss; i++)
            {
                cout<<5;
            }
            for (int i = 0; i < n-c; i++)
            {
                cout<<0;
            }
        }
    }
    else cout<<-1;
    return 0;
}