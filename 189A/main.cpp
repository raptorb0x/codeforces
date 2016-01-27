#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,a[3];
    int x=0,y=0,z=0,ab,i,j,ij,maxx=0;
    cin>>n>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;    do
    x=n/a[0];
    i=n%a[0];
    if(x*a[0]==n)
    {
        cout<<x;
        return 0;
    }

    do
    {
        x--;
        i+=a[0];
        if(x*a[0]+(i/a[1])*a[1]==n)
        {
            maxx=x+i/a[1];
            break;
        }
         if(x*a[0]+(i/a[2])*a[2]==n)
        {
            if(((x-1)*a[0]+((i+a[0])/a[1])*a[1]==n)&&x)
            {
                maxx=x-1+(i+a[0])/a[1];
                break;
            }
            else
            {
                maxx=x+i/a[2];
                break;
            }
        }
        if (x*a[0]+(i/a[2])*a[2]+((i%a[2])/a[1])*a[1]==n)
        {
            maxx=x+i/a[2]+(i%a[2])/a[1];
            break;
        }

    }
    while(1);
    cout<<maxx;
    return 0;
}
