#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> x;
    int y;
    int mmm;
    cin>>mmm;
    while(mmm>0)
    {
        cin>>y;
        x.push_back(y);mmm--;
    }
    int m = 0;
    for(int i = 0; i<x.size();i++)
    {
        if(x[m]>=x[i])
            m = i;
    }
    int sum = x.size()-(m+1);
    auto j = max_element(x.begin(),x.end());
    sum+=(j-x.begin());
    if((j-x.begin()) > m ) sum--;
    cout<<sum;

}