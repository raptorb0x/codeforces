#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    std::ios::sync_with_stdio(false);
    int n,i,j;
    cin>>n;
    cout<<ceilf((n*n)/2.0)<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
          {
            cout<<(((j%2)^(i%2))?".":"C");
          }
     cout<<endl;
    }
    return 0;
}
