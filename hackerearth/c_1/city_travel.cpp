#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main() {

  ll s,x,n;
  do{
    cin>>s>>x>>n;
  }while(s<1||x>pow(10,9)||n>pow(10,3));

  ll t[n],y[n];
  ll n1 = n;
  while(n--)
  {
    do{
      cin>>t[n]>>y[n];
    }while(t[n]<1||y[n]>pow(10,9));
  }

  int j = 1,check;
  ll c = 0;
  do{
    check = 0;
    for(int i=0;i<n1;i++)
    {

        if(j == t[i])
      {
        c+=y[i];
        check = 1;
      }
    }
    if(check==0)
    {
      c+=x;
    }
    j++;
    //cout<<c<<" "<<j<<" ";

  }while(s>c&&c!=s);

  cout<<j-1<<endl;
  return 0;
}
