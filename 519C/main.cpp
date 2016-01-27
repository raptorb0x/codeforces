#include <iostream>

using namespace std;

int main()
{
    int n,m,sum=0;
    cin>>n>>m;

    if(n>m)
        if(n-m<=m)
        {
            int temp=n-m;
            sum+=temp;
            m-=temp;
            n-=2*temp;
        }
        else
        {
            n-=2*m;
            sum+=m;
            m=0;
        }
    else if(m-n<=n)
    {
        int temp=m-n;
        sum+=temp;
        n-=temp;
        m-=2*temp;
    }
        else
        {
        m-=2*n;
        sum+=n;
        n=0;
        };

    if(n==m)
    {
        sum+=(n/3)*2;
        n%=3;
        m%=3;
        if((n>=1&&m>1)||(m>=1&&n>1)) sum++;
    }

cout<<sum;
return 0;
}
