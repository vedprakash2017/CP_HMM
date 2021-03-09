#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    vector <int> v;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='.') v.push_back(0);
        else if( a.substr(i,2) == "-." ) {v.push_back(1); i++;}
        else {v.push_back(2);i++;}
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i];
}