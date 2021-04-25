#include <bits/stdc++.h>
using namespace std;

int main()
{
vector <int> x {10,1,0,2,0,12,111,-1};
cout<<min_element(x.begin(),x.end(),greater<int>())-x.begin();
}