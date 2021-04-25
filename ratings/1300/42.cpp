#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x=0;
    string s1;
    cin>>s1;
    for(int i=0;i<s1.size();i++)
        if(s1[i]!='1' && s1[i]!='4')
            x=1;
    if(s1[0]!='1') x=1;
    if(s1.find("444") != string::npos)
        x= 1;
    if(x) cout<<"NO";
    else cout<<"YES";
    return 0;
}