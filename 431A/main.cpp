#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    unsigned long long sum=0;
    int a[5];
    string s;
    cin >> a[1]>>a[2]>>a[3]>>a[4];
    cin>>s;
    for(int i=0;i<s.size();i++)
        sum+=a[(char)s[i]-'0'];

    cout<<sum;
    return 0;
}
