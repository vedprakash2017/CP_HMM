#include <bits/stdc++.h>

using namespace std;

using ll = long long int;
vector < pair < ll,ll> > ans;

bool fnn( pair <ll,ll> &a , pair <ll,ll> &b)
{
    return (a.second<b.second);
}

void solve()
{
    ll n,x,y;
    cin>>n;
    while(n--)
    {

        cin>>x;cin>>y;
        ans.push_back(make_pair(x,y));
    }
    sort(ans.begin(),ans.end(),fnn);


    int c=1;
    ll max = ans[0].second;
    for(int i= 1; i<ans.size();i++)
    {
        if(ans[i].first >= max) { c++; max = ans[i].second;}
    }
    cout<<c<<endl;

}
int main()
{
    // int t; cin>>t;while(t--)
    solve();
    cout<<endl;
    return 0;
}