#include<bits/stdc++.h>
using namespace std;

int main(){
      long long int n, mn=INT_MAX,out=-1;
      bool flag=false;
      cin>>n;
      vector<int> inp(n);
      for(int i=0;i<n;i++){
            cin>>inp[i];
            if(mn>inp[i]) mn = inp[i];
      }
      for(int i=0;i<n;i++){
            if(inp[i]==mn)
            {
                  if(!flag)
                  {
                        flag=true;
                        out=i;
                  }
                  else
                  {
                        flag=false;
                        break;
                  }
            }
      }
      if(flag)
            cout<<out+1<<endl;
      else
            cout<<"Still Rozdil"<<endl;
}