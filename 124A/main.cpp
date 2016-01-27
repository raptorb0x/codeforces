#include <iostream>

using namespace std;

int main()
{
std::ios::sync_with_stdio(false);
    int n,a,b,i,k=0;
    cin >>n>>a>>b;
    cout<<n - max(a + 1, n - b) + 1;
    return 0;
}
