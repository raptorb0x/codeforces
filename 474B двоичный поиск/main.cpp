#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int n,m,i,temp,left,right,key,j;
    cin>>n;
    int a[n];
    a[0]=0;
    cin>>a[1];
    for(i=2; i<n+1; i++)
    {
        cin>>temp;
        a[i]=a[i-1]+temp;
    }
   //  for(i=0;i<n+1;i++)
     //   cout << a[i]<<" ";
    cin>>m;
    int q[m];
    for(i=0; i<m; i++)
        cin>>q[i];
    for(i=0; i<m; i++)
    {
        left=0;
        right=n;
        while(left<=right)
        {
            key=left+(right-left)/2;
            //cout<<key <<" key "<<a[key]<<" key+1 "<<a[key+1]<<" isk "<<q[i] <<endl;
            //cin>>temp;
            if(a[key]<q[i]&&q[i]<=a[key+1])
            {
                cout<< key+1<<endl;
                break;
            }
            else
                if (a[key]>=q[i])
                    right=key-1;
                    else left=key+1;
        }

    }
    return 0;
}
