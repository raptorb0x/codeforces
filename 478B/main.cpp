#include <iostream>

using namespace std;

long long int pair_(long long int n)
{
  return n*(n-1)/2;
}
int main()
{
    int n,m;
    int mink,maxk,mincol;
    cin >> n>>m;
    mincol=n%m;
    mink=n/m+1;
    maxk=n-m+1;
    cout<<((mincol)?pair_(mink)*mincol:0)+pair_(mink-1)*(m-mincol)<<" "<<pair_(maxk);
}
