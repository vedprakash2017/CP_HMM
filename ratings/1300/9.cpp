#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c =1,c1=0,c2=0;
    unsigned long long int x;
    cin>>x;
    string s = to_string(x);
    for( char x:s)
        {
            if( x-'0' == 4 )
                {
                    c1++;
                    continue;
                }
            else if( x-'0'==7)
            {
                c2++;

                    continue;
            }
                c=0;
            break;
        }
    if( c1>0 && c2>0)
    c?(cout<<"YES"):cout<<"NO";
    else
    cout<<"NO";
}