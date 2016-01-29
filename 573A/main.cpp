#include <iostream>

using namespace std;

int main()
{
     long long int a,base=0;
     int n;
    cin >>n;
    for (int i=0;i<n;i++)
    {
        cin>>a;
        //разделить на максимумльнеочисло 2 и 3
        while (!(a%3)) a/=3;
        while (!(a%2)) a/=2;
        (!base)?base=a:0;
        if (base !=a)
        {
            cout<<"No";
            return 0;
        }

    }
    cout<<"Yes";
    return 0;
}
