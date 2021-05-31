#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int g,p;
    vector <int> x(10,0);
    cin>>t;
    while(t--)
    {
        cin>>g>>p;
        for(int i=0;i<10;i++)
            cin>>x[i];
        int sum=0, min=0;
        for(int j=10;j>g;j--)
            {
                sum+=x[j-1];
            }
        // if(sum%p==0) 
        min+=sum/p+1;
        // else min+=sum/p;
        sum+=x[g-1];
    int max =0;
        if(sum%p==0) max+=sum/p;
        else max+=sum/p+1;
        // int max = min+(x[g-1]+1)/p;
        cout<<min<<" "<<max<<endl;    
    }
    return 0;
}