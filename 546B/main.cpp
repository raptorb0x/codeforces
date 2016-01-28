#include <iostream>
#include <algorithm>
using namespace std;

int main()

{
    std::ios::sync_with_stdio(false);
    int n,i,j,sum=0;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin >>a[i];
    }
    sort (a,a+n);
    i=0;
    while(i<n-1)
    {
        int inc=i;
        while(a[i]==a[++inc])
        {
            a[inc]++;
            sum++;
        }
        //for (int j=0;j<n;j++)
        //    cout<<a[j]<<" ";
        //cout<<endl;
        i++;
    }
    cout<<sum;
    return 0;
}
