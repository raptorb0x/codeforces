#include <iostream>

using namespace std;

int main()
{
    int n=5,i;
    int a[]={-2,-4,-2,-8,-1};
    for(i=0;i<n;i++)
    {

    }
    int maxa=-1000000;
    for (i=0;i<n;i++)
    {
        if(a[i]>maxa)
        maxa=a[i];
    }
    cout<<maxa;
    return 0;
}
