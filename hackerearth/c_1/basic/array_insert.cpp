#include <iostream>

using namespace std;
int main() {

  int n,q;
  cin>>n;
  cin>>q;
  int arr1[n];
  for(int i = 0;i<n;i++)
  {
    cin>>arr1[i];
  }
  int arr[q][3];
  for(int j = 0;j<q;j++)
  {

    for(int k = 0;k<3;k++)
    {
      cin>>arr[j][k];
    }
  }
  for(int l = 0;l<q;l++)
  {
    if(arr[l][0]==1)
    {
      arr1[arr[l][1]] = arr[l][2];
    }
    else if(arr[l][0]==2)
    {
      int sum = 0;
      for(int h=arr[l][1];h<arr[l][2]+1;h++)
      {
        sum = sum+arr1[h];
      }
      cout<<sum<<endl;
    }
  }

  return 0;
}
