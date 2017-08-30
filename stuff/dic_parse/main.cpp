#include <iostream>
#include <fstream>
#include <clocale>
#include <vector>
#include <algorithm>
#include <regex>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    multiset<string, bool(*)(string const&, string const&)> Str([](string const& str1, string const& str2){return str1.size() < str2.size();});
    ifstream dic ("dic.txt");
    int max_s=0;
    string line;

    ofstream outfile ("dicfil.txt");

    if (!(dic.is_open()))
    {
        cout << "Unable to open dictionary" <<endl;
        return 1;
    }
    while (getline(dic, line))
    {
        Str.insert(line);
    }
    for(auto x:Str)
    outfile <<x<<endl;

}
