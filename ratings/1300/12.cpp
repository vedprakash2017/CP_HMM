#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    string s3(s1.size(),'0');
    for(int i=0;i<s1.size();i++)
    {
        cout<<char((s2[i]-'0')^(s1[i]-'0'))+0;
    }
    return 0;
}