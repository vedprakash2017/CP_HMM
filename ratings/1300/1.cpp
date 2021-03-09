#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;
  int n;
   int x,y,z;
  cin>>n;
  int s1=0,s2 =0,s3=0;
  for(int i =0;i<n;i++) 
 {
   cin>>x;
   cin>>y;
   cin>>z;
    s1+=x;
    s2+=y;
    s3+=z;
  }
  if( s1 || s2 || s3) cout<<"NO";
  else cout<<"YES";
  return 0;
}