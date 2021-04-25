#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int t,n,k;
  cin>>t;
    vector< bool > ans;
  for(int i =0;i<t;i++) 
  {
      int v = 1;
      cin>>n;
      cin>>k;
      cin>>s;
      if(n >= 2*k+1 )
      {
          for (int j = 0; j < k; j++)
          {
              if( s[j] != s[s.size()-1-j])
              {
                  v = 0;
                  ans.push_back(0);
                  break;
              }
          }
          if(v==1)
          ans.push_back(1);          

      }
      else
      {
          ans.push_back(0);
      }
  }
  for(auto i: ans)
  {
      string s = i?"YES":"NO";
      cout<<s<<endl;
  }

  return 0;
}