#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
int compare1(string x,string y)
{
  int p[26]={0},q[26]={0};
  for(int i = 0;i<x.length();i++)
  {
    p[x[i]-97]++;

  }
  for(int j = 0;j<y.length();j++)
  {
    q[y[j]-97]++;
  }
  int sum = 0;
  for(int k=0;k<26;k++)
  {
    sum+=abs(p[k]-q[k]);
  }
  return sum;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string a,b;
    cin>>a;
    cin>>b;
    cout<<compare1(a,b)<<endl;
  }
  return 0;
}
