#include <bits/stdc++.h>
using  namespace std;


int main()
{
    long long int i,n;
    vector<long long int> x;

    cin>>n;
    if(n==0) { cout<<"0 0 0"; return 0; }
    
    x.push_back(0);
    x.push_back(1);
    x.push_back(1);
    
    int nex = 0;i = 3;
    
    while (1)
    {
        nex = x[i-2]+x[i-1];
        if(nex>= n) break;
        x.push_back(nex);
        i++;
    }
    for(long long int m = 0; m<i;m++)
    {
        for(long long int n = 0; n<i;n++)
    {
        
    }    

    }
   return 0;
}
