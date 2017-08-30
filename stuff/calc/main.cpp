#include <fstream>
using namespace std;

int main()
{
    int i=1;
    ofstream out;
    out.open("test.txt");
    for (i=0;i<24;i++)
        out<<((i%2)?-1:1)<<"*(";
    out<<1;
    while(i--)
        out<<")";
    return 0;
}
