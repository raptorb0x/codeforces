#include <iostream>

using namespace std;

int main()
{
    int n,m,i,x,maxi,maxx=0;
    cin>> n>>m;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(( x/m +((x%m)?1:0)) >= ( maxx/m + ((maxx%m)?1:0)))
        {
            maxi=i+1;
            maxx=x;
        }
    }
    cout<<maxi;
    return 0;
}
