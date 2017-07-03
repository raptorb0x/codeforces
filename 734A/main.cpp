#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    string s;
    //cout << "Hello world!" << endl;
    cin >> n >> s;
    //cout<< s << " " << n;
    for (int i =0; i<n; i++)
        sum+=(s[i]=='A')?1:-1;
    //cout<< sum;
    (sum==0)?s="Friendship":((sum>0)?s="Anton":s="Danik");
    cout<< s;
    return 0;
}
