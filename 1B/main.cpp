#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

std::ios::sync_with_stdio(false);
    int n,i,j,az_temp;
    string in,temp1="",temp2="",az_rez="";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>in;
        temp1="";
        temp2="";
        int Flag=0;
        for(j=0;j<in.length()-1;j++)
            if('0'<=in[j]&&in[j]<='9'&&in[j+1]=='C')
            Flag=1;
        if (Flag)
        {
            j=0;
            while(in[j+1]!='C')
                temp1+=in[++j];
            j++;
            while(in[j+1]!='\0')
                temp2+=in[++j];
            az_temp=atoi(temp2.c_str());
            az_rez="";
            while (az_temp>0)
            {
                az_temp--;
                az_rez=(char)('A'+az_temp%26)+az_rez;
                az_temp/=26;
            }
            cout<<az_rez<<temp1<<endl;
        }
        else
        {
            j=0;
            while(in[j]< '0' || in[j] >'9')
                temp1+=in[j++];
             while(in[j]!='\0')
                temp2+=in[j++];
            az_temp=0;
            for(j=0;j<temp1.length();j++)
            {
                az_temp=az_temp*26+temp1[j]-'A'+1;
            }
            cout<<"R"<<temp2<<"C" <<az_temp<<endl;
        }


    }
    return 0;
}
