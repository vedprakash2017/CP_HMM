#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q = 0;
    cin>>n;
    n++;
    if(n<=9001 && n>=1000)
    while(1)
    {

        string a = to_string(n);
        for (int i = 0; i < 3; i++)
        {
            if( find(a.begin()+i+1,a.end(),a[i]) != a.end() )
            {

                q =1;
                break;
            }
        }
        if(q==0) break;
        n++;
        q=0;
    }
    else
    return 0;

    cout<<n;
}