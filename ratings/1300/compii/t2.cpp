#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v,ans1;
  int t,n,k,x,max,mex = -1,a,p,count;

    unordered_map <int,int> ans; 
  cin>>t;
  for(int i =0;i<t;i++) 
  {
      cin>>n;
      count = n;
      cin>>k;
      for (int j = 0; j < n; j++)
      {
          cin>>x;
          v.push_back(x);
      }

      for (int m = 0; m < k; m++)
      {
        max = *max_element(v.begin(),v.end());
        for( p = 0; p<v.size();p++)
        {
            if(find(v.begin(),v.end(),p)==v.end() )
            {
                mex = p;
                break;
            }
        }
        if(mex==-1) mex = p;
        a = lround(float(max+mex)/2);
        v.push_back(a);
        mex = -1;
      }

  for(auto i:v)
  {

      if( ans.find(i)==ans.end() )
      {
          ans[i]++;
      }
  }

  ans1.push_back(ans.size());
  ans.clear();

  }
for(auto i:ans1)
{
    cout<<i<<endl;
}
  return 0;
}