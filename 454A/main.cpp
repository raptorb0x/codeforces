#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        //cout << ((n+1)/2-abs((n+1)/2-i-1)) <<" "<<(n+1)/2;
        for(int j=0;j<n;j++)
        if (j>=(n+1)/2-((n+1)/2-abs((n+1)/2-i-1)) && j<=(n+1)/2-2+((n+1)/2-abs((n+1)/2-i-1))) cout <<"D";
        else cout <<"*";
        cout <<endl;
    }
    return 0;
}
