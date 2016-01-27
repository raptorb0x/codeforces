#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,a;
    float k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        k=360.0/(180-a);
        ((k==(int)k)&&!!k&&k>2)?puts("YES"):puts("NO");

    }
    return 0;
}
