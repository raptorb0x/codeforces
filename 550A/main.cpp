#include <iostream>
#include <string>
using namespace std;

int main()
{
    int diff;
    string in;
    cin>>in;
    size_t posab = in.find("AB");
    size_t posba = in.find("BA");

    posab=(posab==string::npos)?-1:posab ;
    posba=(posba==string::npos)?-1:posba ;
    diff=(int)posab - (int)posba;
    if(posab==-1 ||posba==-1 || ((-1 <= diff) && (diff <=1)))
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
    return 0;
}
