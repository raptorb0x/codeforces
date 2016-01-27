#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
    int n2=0,n3=0,n5=0,n7=0;
    int n,i;
    cin >>n;
    int a[n];
    char in;
    for(i=0; i<n; i++)
    {
        cin>>in;
        a[i]=in-'0';
    }
    sort(a,a+n);
    reverse(a,a+n);
    for(i=0;i<n;i++)
    {
        switch(a[i])
        {
            case 9:{n7++;n3+=2;n2++;break;};
            case 8:{n7++;n2+=3;break;};
            case 7:{n7++;break;};
            case 6:{n5++;n3++;break;};
            case 5:{n5++;break;};
            case 4:{n3++;n2+=2; break;};
            case 3:{n3++;break;};
            case 2:{n2++;break;};
        };
    };
    while(n7--) cout<<"7";
    while(n5--) cout<<"5";
    while(n3--) cout<<"3";
    while(n2--) cout<<"2";
    //cout<<n7<<" " <<n5 <<" " <<n3<< " "<<n2;
    return 0;
}
