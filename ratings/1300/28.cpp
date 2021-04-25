#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,c=0,c1=0,y,x=3;
 cin>>n;
 while(n--)
 {
     x = 3;
     c=0;
     while(x--)
     {
         cin>>y;
         if(y==1) c++;
     }

     if(c>=2) c1++;

 }   
 cout<<c1;
    return 0;
}