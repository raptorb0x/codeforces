#include <iostream>

using namespace std;

int main()
{
    int n,m,a,b=2,k=0;
    cin >>n>>m;
    for (a=0;a<=b && b>=0;a++)
    {
        b=n-a*a;
        if(b<0) continue;
        //cout<<a*a+b<<" "<<b*b+a<<endl;
        if (a+b*b==m)
            k++;
    }
    cout<<k;
    return 0;
}
