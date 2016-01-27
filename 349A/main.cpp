#include <iostream>

using namespace std;
int Flag=1;

void check(int a,int b)
{
    if (a<0||b<0) Flag=0;
}

int main()
{

    int n,sum=0,in,kol25=0,kol50=0;
    cin >>n;
    for (int i=0;i<n;i++)
    {
        cin>> in;
        if (in==25)
            kol25++;
        if (in==50)
        {
            kol25--;
            check(kol25,kol50);
            kol50++;
        }
        if (in==100)
        {
            if(kol50)
            {
                kol50--;
                kol25--;
                check(kol25,kol50);
            }
            else
            {
                kol25-=3;
                check(kol25,kol50);
            }
        }
        if(!Flag)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<((!Flag)?"NO":"YES");

    return 0;
}
