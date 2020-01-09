#include <iostream>

using namespace std;
int main() {

  long n;
  cin>>n;
  long arr[n];
  for (int i = 0; i < n; i++) {

    cin>>arr[i];
  }
  if(n==1)
  {
    cout<<arr[0]<<" "<<0<<" "<<0<<endl;
    return 0;
  }
  else if(n==2)
  {
    cout<<arr[0]<<" "<<arr[1]<<" "<<0<<endl;
    return 0;
  }
  else
  {
  if(n==3)
  {
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    return 0;
  }

  long a1 = arr[0];
  long a2 = arr[1];
  long a3 = arr[2];
  for(int k = 3;k<n;k++)
    {
      if(k%3==0)
      {
        a1+=arr[k];
      };
      if(k%3==1)
      {

          a2+=arr[k];
      }
      if(k%3==2)
      {

          a3+=arr[k];
      }
    }
    cout<<a1<<" "<<a2<<" "<<a3<<" ";
    return 0;
  }
}
