
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;
    for(int i=0; i<2*n+1; i++)
    {
        for(int j=0; j<2*n+1; j++)
        {
            temp=(n-abs(n-i))- abs(n-j);
            if (temp <0 && j>=n) break;

            temp<0?cout<<"  ":(temp==0 && j<=n)?cout<<temp:cout<<" "<<temp;
        }
        cout <<endl;
    }
    return 0;
}
