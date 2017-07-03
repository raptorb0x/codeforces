#include <iostream>

using namespace std;

int main()
{
    int k2,k3,k5,k6,min256,min32;
    long summ=0;
    cin >> k2>>k3>>k5>>k6;
    min256=(k2<k5)?k2:k5;
    min256=(min256<k6)?min256:k6;
    summ += min256 * 256;
    k2-=min256;
    min32=(k2<k3)?k2:k3;
    summ += min32 * 32;
    cout<<summ;
    return 0;
}
