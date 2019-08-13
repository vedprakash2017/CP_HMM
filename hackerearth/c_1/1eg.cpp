#include <iostream>
#include <string.h>
using namespace std;
int main() {

  int n,j;
  string s;

  do{
    cin>>n;
}while((n<0)||(n>11));


do{
  cin >> s;
  j = s.size();
}while((j<0)||(j>16));
cout<<n*2<<endl;
cout<<s;

  return 0;
}
