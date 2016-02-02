#include <iostream>

using namespace std;

int main()
{
    int n,current,maxx=0,last=0,defect=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>> current;
    defect+=last-current;
    if (defect<maxx) maxx=defect;

    last=current;
    }
    cout<<-maxx;
    return 0;
}
