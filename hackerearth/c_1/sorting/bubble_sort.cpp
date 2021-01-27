#include <iostream>
using namespace std;
void swap(int g[],int x,int y);

int main()
{

  int n;
  do{
    cin>>n;

  }while(n<1&&n>100);

  int v[n];
  for(int j=0;j<n;j++)
  do{
    cin>>v[j];
  }while(v[j]<1&&v[j]>100);
  int count = 0 ;
  do{
    count= 0;
    for(int m=0;m<n;m++)
      if(v[m]>v[m+1])
      {
        swap(v,m,m+1);
        count++;
      }
    }while(count>0);
  for (int q = 0; q < n; q++) {
    cout<<v[q]<<"   ";
  }
  return 0;
}

void swap(int g[],int x,int y)
{
  int c;
  c = g[x];
  g[x] = g[y];
  g[y] = c;
}
