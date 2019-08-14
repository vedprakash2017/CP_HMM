#include <iostream>
using namespace std;
int main() {

  long long n;
  int l;
  string str;
  int check =1;
  cin>>n;
  int arr[7] = {0};
  do{
    check =1;
      cin>>str;
      for(int i=0;i<str.size();i++)
    {
      switch (str[i]) {
        case 'h': arr[0]++;
              break;
        case 'a': arr[1]++;
              break;
        case 'c': arr[2]++;
              break;
        case 'k': arr[3]++;
              break;
        case 'e': arr[4]++;
              break;
        case 'r': arr[5]++;
              break;
        case 't': arr[6]++;
              break;
      }
      if((str[i]-97)<0||(str[i]-122)>0)
    {
      check = 0;
    }

    }
  }while(check==0);

  arr[2]= arr[2]*2;
  arr[3] = arr[3]*2;
  arr[6] = arr[6]*2;
  int min=arr[0];
  for(int k=0;k<7;k++)
  {
    if(min>arr[k])
    {
      min = arr[k];
    }
  }
  cout<<min/2<<endl;
  return 0;
}
