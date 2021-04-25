#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map <int,int> x;
    int n=4;
    int sum=0,y;
    while(n--)
    {
        cin>>y;
        x[y]++;
    }
    for(auto i:x)
    {
        if(i.second>1)
            sum+=i.second-1;

    }
    cout<<sum;
    return 0;
}