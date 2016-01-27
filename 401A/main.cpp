#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int n,x;
    int summ=0,temp;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
    cin>>temp;
    summ+=temp;
    }
    summ=abs(summ);
    cout<<((summ%x)?summ/x+1:summ/x);
    return 0;
}
