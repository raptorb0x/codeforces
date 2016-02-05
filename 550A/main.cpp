#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int diff;
    string in;
    cin>>in;
    vector <size_t> posab;
    vector <size_t> posba;
    posba.push_back(in.find("BA"));

    while (1)
    {
        posba.push_back(in.find("BA",posba.back()+1));
        if (posba.back()==string::npos)
            break;
    }


    posab.push_back(in.find("AB"));
    while (1)
    {
        posab.push_back(in.find("AB",posab.back()+1));
        if (posab.back()==string::npos)
            break;
    }

    for(int i=0; posba[i]!=string::npos; i++)
        for(int j=0; posab[j]!=string::npos; j++)
        {
            if (abs((int)posba[i]-(int)posab[j])>=2)
            {

                cout<<"YES";
                return 0;
            }
        }
    cout<<"NO";
    return 0;
}
