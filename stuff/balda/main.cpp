#include <iostream>
#include <fstream>
#include <clocale>
#include <regex>
#include <set>


using namespace std;

//������� ����
const int n=5,m=5;

//������  ������ � ��������� ������ ������
const char Mask='.';

const char fMask=Mask-1;

//����
struct Puzzle
{
    char data[n][m];
} puzzle;

//������ ������-����� �����
int Flag [n][m];


multiset<string, bool(*)(string const&, string const&)> Str([](string const& str1, string const& str2)
{
    return (str1.size() > str2.size())&&(str1 != str2);
});

multiset<string, bool(*)(string const&, string const&)> Dic([](string const& str1, string const& str2)
{
    return str1.size() > str2.size();
});

multiset<string, bool(*)(string const&, string const&)> Ans([](string const& str1, string const& str2)
{
    return str1.size() > str2.size();
});
//����������� ����� ���������� �������
void Search(Puzzle &puzzle,int x, int y,string _str)
{

    //�������� �� ��������� ������� ���� � ������� ������� ��� ���� �� ���� ����������, � ����������� �� �����������
    if(!((_str.find(Mask)!=-1)&&(puzzle.data[x][y]==Mask)) && puzzle.data[x][y]!=fMask)
    {
        //���������� ������ � ������
        _str+=puzzle.data[x][y];
        //TODO: ���� ������ �� �������, ���� ���� ��� �� ������ ����� ���� ���
        //������ ���� �������� ���� ����� ������������ ������� �����, �� ���� ���� ���� ������
        //���� ����� �� ������� ������� �����, �� ������ ���� ������ ���� ���
        bool Go=false;
        for (auto i:Dic)
            if(regex_search(i,regex("^"+_str)))
            {
                Go=true;
                break;
            }

        if(_str.find(Mask)!=-1 && Go)
            Str.insert(_str);

        if(Go)
        {
            //��������� ������
            char _temp = puzzle.data[x][y];
            puzzle.data[x][y]=fMask;
            if(x!=0)
                Search(puzzle,x-1,y,_str);
            if(x!=n-1)
                Search(puzzle,x+1,y,_str);
            if(y!=0)
                Search(puzzle,x,y-1,_str);
            if(y!=m-1)
                Search(puzzle,x,y+1,_str);
            puzzle.data[x][y]=_temp;
        }
    }

}



int main()
{
    //��������� ������ � ������ ������
    setlocale(LC_ALL, "");
    ifstream myfile ("balda.txt");
    ifstream dicfile ("dic.txt");

    string line;

    //�������� �� �������� �����
    if (!(myfile.is_open()))
    {
        cout << "Unable to open puzzle" <<endl;
        return 1;
    }

    if (!(dicfile.is_open()))
    {
        cout << "Unable to open dictionary" <<endl;
        return 2;
    }

    while(getline(dicfile, line))
    {
        Dic.insert(line);
    }
//������ �� �����
    cout << "Processing file...\n" <<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            myfile>>puzzle.data[i][j];
        }
    }

// TODO: ������ �����
//������� �����
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(puzzle.data[i][j]=='0')
             puzzle.data[i][j]=Mask;
        }
    }



//��������� ��������
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(puzzle.data[i][j]!=fMask)
            {
                cout<<"\t\t\t\r";
                cout<< i+1 << "   " << j+1;
                Search(puzzle,i,j,"");
            }
    cout<<"\t\t\t\r";
    set<string> _temp;
    for(auto x:Str)
        _temp.insert(x);
    Str.clear();
    for(auto x:_temp)
        Str.insert(x);
cout<<"���������� ���� �������� ��������� " << Str.size()<<"\n"<<endl;

    //������� ���������� ����� ���������
    for (auto x:Str )
    {
        cout<< "\t\t\t\t\t\t\t\r";
    cout <<<< x<<"  count "<<Ans.size();
        for (auto y:Dic)
        {
            if(regex_search(y,regex("^"+x+"$")) )
            {
                Ans.insert(y+"    "+x);
            }
        }

        if (Ans.size()>=10)
            break;

    }
    cout<< "\t\t\t\t\t\t\t\t\r";
    for(auto x:Ans)
        cout << x<<endl;


    return 0;
}
