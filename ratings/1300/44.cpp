#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string c,c1;
    cin>>n;
    unordered_map <string,int> x;
    for (int i = 0; i < n; i++)
    {

        cin>>c;
        x[c]++;
    }
    int max = 0;
    for(auto i:x)
    {
        if(i.second > max ) { max = i.second; c1 = i.first; } 
    }
    cout<<c1;
}