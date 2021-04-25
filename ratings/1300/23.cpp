#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_map <char,int> x;
    int c=0;
    for(auto i:s)
    {
        if(x.find(i) == x.end())
          {  x[i]++; c++;}
    }
    if(c%2==1) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    return 0;
}