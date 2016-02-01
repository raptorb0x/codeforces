#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n==1||n==2)
    {
        cout<< "1" << endl << "1";
    }
    if(n==3)
    {
        cout << "2" << endl << "1 3";
    }
    if(n==4)
    {
        cout << "4" << endl << "2 4 1 3";
    }
    if(n>4)
    {
        cout <<n<<endl;
        for (int i =5;i<=n;i+=2)
        cout<< i << " ";
        cout<< "2 4 1 3 ";
        for (int i =6;i<=n;i+=2)
            cout<< i<<" ";
    }
    return 0;
}
