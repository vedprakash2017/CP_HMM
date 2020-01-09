#include <iostream>
#include <string>
using namespace std;
int main() {

  string s;
  int k;
  do{
  cin>>s>>k;
}while(s.size()>19||k>11);

  for(int i=0;(i<s.size()&&k>0);i++)
  {
    if(s[i]=='9') continue;
    s[i]='9';k--;
  }
  cout<<s;
  return 0;
}
