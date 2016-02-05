#include <iostream>

using namespace std;

int main()
{
 ios::sync_with_stdio(false);
 int sum=0,n,m,a,b;
 cin >>n>>m;
 for (int i=0;i<n;i++)
    for (int j=0;j<m*2;j+=2)
    {
     cin>>a>>b;
     if (a || b) sum++;
    }
  cout<< sum;
}
