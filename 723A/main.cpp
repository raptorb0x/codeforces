#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,diff,target;
    cin>> a>>b>>c;
    if (a > b && a < c || a < b && a > c)
        target = a;
    else
        if (b > a && b < c || b < a && b > c)
            target= b;
        else
           target=c;

    diff = abs(target-a)+abs(target-b)+abs(target-c);
    cout<< diff;
    return 0;
}
