#include <iostream>

using namespace std;

int main()
{
    int n,m,k,xf,temp,kdif,sum=0;
    cin>>n >>m>>k;
    int x[m];
    for(int i=0;i<m;i++)
        cin>>x[i];
    cin >> xf;
    for(int i=0;i<m;i++)
    {
        temp=x[i] xor xf;
        kdif=0;
        while(temp)
        {
            kdif+=temp&1;
            temp>>=1;
        }
        (kdif>k)?:sum++;
       // cout << kdif<<" ";
    }
    cout<< sum;
    return 0;
}
