#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,m,l,r,summ;
    string s;
    cin>>s;
    n=s.length();
    int a[n];
    //s to int
    for(int i=0;i<n-1;i++)
        a[i]=(s[i]==s[i+1])?1:0;
    for(int i=1;i<n-1;i++)
        a[i]=a[i-1]+a[i];
   // for (int i =0;i<n-1;i++)
   //     cout<<a[i]<<" ";

    cin>> m;
for (int i=0;i<m;i++)
    {
        cin>>l>>r;
        summ = a[r-2] - a[l-1];
        summ+=(l!=1 && a[l-1]!=a[l-2])?1:0;
        summ+=(l==1 && a[l-1]==1)?1:0;
       cout<<summ <<endl;
    }

    return 0;
}
