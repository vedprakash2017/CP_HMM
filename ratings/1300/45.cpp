#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    
    cin>>n;
    vector <int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v1[i];
    }

    cin>>m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
    {
        cin>>v2[i];
    }
    
    int max = INT_MIN,c1=0; 
    
    for (int i = 0; i < n; i++)
    {

    for (int j = 0; j < m; j++)
    {
        if(v2[j]%v1[i] == 0 ) {
            if(max ==  v2[j]/v1[i]) { c1++;} 
            else if(max< v2[j]/v1[i]) { max = v2[j]/v1[i]; c1=1;}
             

        }
        }
    }
    cout<<c1;
    
    return 0;
}