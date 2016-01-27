#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    long long int s=0,temp;
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++)
        cin >> a[i];
    sort (a,a+n);
    reverse(a,a+n);
    temp=a[0]+((n-1)?a[1]:0);
    s=temp;
    for (int i=2;i<n;i++)
    {
        s+=temp+a[i];
        temp+=a[i];
    }
    (n>1)?s+=temp:0;
    cout<<s;
    //printf("%d",s);
    return 0;

}
