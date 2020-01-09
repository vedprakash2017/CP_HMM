#include <iostream>

using namespace std;
int main() {

  int n,i,j,k=1;
  long p;
  cin>>n>>i>>j>>p;
  long arr[n][n] = {0};
  for (int q1 = 0; q1 < n; q1++)
  {

    for (int w1 = 0; w1 < n; w1++)
    {
        arr[q1][w1]=0;
    }
  }

  int q=i,w=j,p1=p;

    arr[q][w] = p;
  do {
    // int a=2,s=2;
    cout<<p;
    p--;
    for (int l = -1*k; l < 2*k; l = l+k)
    {

      for (int e = -1*k; e < 2*k;e= e+k)
      {
        cout<<l<<e<<k<<" ved ";
          if(l==0)
            if(e==0)
              if(p>0&&p!=0)
                {
                  // cout<<l<<e<<p<<" v ";
                  continue;
                }

          if(p>0&&p!=0)
            {

              if((q+l)<n&&(w+e)<n)

              {
                arr[(q+l)][(w+e)] = p;

              // cout<<(w+e*k)<<" "<<(q+l*k)<<" v ";
            }
          }
        }
    }

    // a++;
    // s++;
    k++;
  }while((p>0)&&(p!=0));

  for (int q1 = 0; q1 < n; q1++)
  {

    for (int w1 = 0; w1 < n; w1++)
    {
        cout<<arr[q1][w1]<<" ";
    }
    cout<<endl;
  }
  cout<<arr[2][1];
  return 0;
}
