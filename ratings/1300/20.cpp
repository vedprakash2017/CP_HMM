#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    for(int i =0;i<s.size();i+=2)
        s1.push_back(s[i]);
    sort(s1.begin(),s1.end());
    for(int i =1;i<s.size();i+=2)
        s1.insert(s1.begin()+i,'+');
    cout<<s1;
    return 0;
}