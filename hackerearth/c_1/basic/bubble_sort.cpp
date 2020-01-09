#include <iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

void swap(int a,int b)
{
  a = a+b;
  b = a-b;
  a = a-b;
}

int main()
{
  string s;
  cin>>s;
  for (int i = 0; i < s.size()-1; i++) {

    if(s.at(i)>s.at(i+1))
    {
      swap(s.at(i),s.at(i+1))
    }

  }
return 0;
}
