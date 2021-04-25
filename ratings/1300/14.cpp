#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> x;
    int y;
    while(cin>>y)
        x.push_back(y);
    auto i = min_element(x.begin(),x.end());  
    int sum = x.size()-(i+1);
    auto j = max_element(x.begin(),x.end());

}