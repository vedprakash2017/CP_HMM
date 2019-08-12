#include <iostream>
#include <math.h>
using namespace std;
int prime(int);
int main() {

  int n;
  do{
    cin>>n;
}while((n<1)||(n>1001));

  if(n==2)
  {cout<<2<<" ";}
  else{

      cout<<2<<" ";
  for(int i=3;i<n+1;i++)
  {
    if(prime(i)==1)
    {
      cout<<i<<" ";
    }
  }
  }

  return 0;
}

int prime(int x)
{
  int y,r=1;
  y = round(pow(x,0.5));

  for (int i = 2; i < y+1; i++)
  {
      if(x%i==0){r=0;}
  }
  return r;
}
