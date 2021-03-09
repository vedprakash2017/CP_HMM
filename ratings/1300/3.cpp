    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
    string a;
    int n,t;
    cin>>n;
    cin>>t;
    cin>>a;
    
    for(int j=0;j<t;j++)
      for(int i =0;i<n-1;i++) 
      {
          if(a[i]=='B' && a[i+1]=='G')
            {
                char x = a[i];
                a[i] = a[i+1];
                a[i+1] = x;
                i++;
            }
        }
    cout<<a;
      return 0;
    }