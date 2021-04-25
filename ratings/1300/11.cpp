#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if(n==2) return 1;
    for(int i=2;i<=round(sqrt(n));i++ )
    {
        if(n%i==0)  return 0;
    }
    return 1;
}
int main()
{
    int n,m;
    cin>>n>>m;
    n++;
while (1)
{
    if(isprime(n)) { if(n==m) { cout<<"YES"; return 0;} break; } n++;
}
cout<<"NO";
}