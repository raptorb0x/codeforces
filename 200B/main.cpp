#include <iostream>

using namespace std;

int main()
{
    int n,sum=0,temp;
    cin>> n;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        sum+=temp;
    }
    cout << sum*1.0/n;
    return 0;
}
