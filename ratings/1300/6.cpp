#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector <int> x (3,1);
  vector < vector<int> > v (3,x);
  for(int i =0;i<3;i++) 
  {
    for(int j=0;j<3;j++)
      {
        int x ; cin>>x;
        if(x%2 ==1)
        {

          for(int m =0;m<3;m++)
          {
              v[i][m]+=1;
          }
          for(int m =0;m<3;m++)
          {
              v[m][j]+=1;
          }
          v[i][j]-=1;
        }

          for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
      {
        cout<<v[i][j];
      }
      cout<<endl;
  }

      }
  }
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
      {
        cout<<v[i][j]%2;
      }
      cout<<endl;
  }
  return 0;

}
