#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i]!=s2[s1.size()-i-1])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";    
    return 0;
}