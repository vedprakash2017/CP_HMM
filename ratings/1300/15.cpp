#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,y;
    int sum=0;
    cin>>n;
    int xx = n;
    while(n--)
    {
        cin>>y;
        sum+=y;
    }
    cout<< setprecision(12)<<fixed<<float(sum)/xx;

}