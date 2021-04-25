#include <bits/stdc++.h>
using namespace std;
int main()
{   string s; int c =0;
    cin>>s;
    for(char x: s)
    {
        if(int(x) >= 97 && int(x) <= 122)
            c++;
    }
    if(c>=(s.size()+1)/2)
    {

        for(char &x: s)
    {
        x = tolower(x);
    }
        cout<<s;
    }
    else
    {

        for(char &x: s)
    {
        x = toupper(x);
    }
        cout<<s;
    }
}