#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> ans;
    int t,x,n,min_1=INT_MAX,max_1=INT_MIN,minpos = 0,maxpos = 0;
    cin>>t;
    while(t--)
    {
            min_1=INT_MAX;max_1=INT_MIN;minpos = 0;maxpos = 0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x<min_1)
            { min_1 =x;
                minpos = i;
            }
            if(x>max_1)
            {
                max_1 =x;
                maxpos = i;
            }

        }

            if( (minpos <= n/2 && maxpos <= n/2) || (minpos >= n/2 && maxpos >= n/2) )
            {
                ans.push_back(max(minpos,maxpos)+1);
                // cout<<max(minpos,maxpos)<<endl; 
            }
            else
            {
                ans.push_back(min(minpos, n-minpos)+min(maxpos, n-maxpos));
                // cout<<min(minpos, n-minpos)+min(maxpos, n-maxpos)<<endl;        
            }
            
    }  
    for(int j=0;j<ans.size();j++)
        cout<<ans[j]<<endl; 
    return 0;
}