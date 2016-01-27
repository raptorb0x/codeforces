#include <iostream>
using namespace std;

int main()
{
    int m,s,ts;
    cin>>m>>s;
    string _max,_min;
    for(int i=0;i<m;i++)
    {
        _max+='0';
        _min+='0';
    }
    _max[0]='1';
    _min[0]='1';
    if((s*1.0/m)>9||((s==0)&&(m!=1)))
    {
        cout<<"-1 -1"<<endl;
        return 0;
    }
    if(m==1 && s==0)
{
        cout<<"0 0";
        return 0;
}
    //подсчет минимального
    int j=1;
    for(ts=s-1;ts>0;ts--)
    {

        _min[m-j]+=1;
        if(_min[m-j]=='9')
        {
            j++;

        }
    }
    j=0;
    for(ts=s-1;ts>0;ts--)
    {

        _max[j]+=1;
        if(_max[j]=='9')
        {
            j++;

        }
    }


    cout<<_min<<" "<<_max;

    return 0;
}
