#include <iostream>

using namespace std;

int main()
{
    char a[3],b[6];
    int x,t;
    cin >> x>>a>>b;
    if(b[0]=='w')
        {
            switch (x)
            {
             case 6:   { cout<<53; break;}
                 case 5:   { cout<<53; break;}
             default: cout <<52;
            }
        }
    else
    {
        switch (x)
        {
            case 30:{ cout<<11; break;}
            case 31:{ cout<<7; break;}
            default: cout <<12;
        }
    }
    return 0;
}
