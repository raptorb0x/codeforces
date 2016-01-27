#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    unsigned long long  a,b,c,m[4];
    cin>>a>>b>>c;
    m[0]=2*a+2*b;
    m[1]=a+b+c;
    m[2]=2*a+2*c;
    m[3]=2*b+2*c;
    cout<<*min_element(m,m+4);

    return 0;
}
