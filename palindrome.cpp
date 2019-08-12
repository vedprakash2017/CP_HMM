#include <iostream>
#include <string.h>

using namespace std;
int main()
{


        string a;
  do
  {

    cin>>a;

  }while(a.length()>101);


  for(int i= 0;i<a.length();i++)
  {
    if(a[i]!= a[a.length()-i-1])
    {
      cout<<"NO";
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;
}
