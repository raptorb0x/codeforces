#include <iostream>
#include <string>
using namespace std;

int main()
{
    string from0to9[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    string from10to19[10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string from20to99[8]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    int s;
    cin>>s;
        //если от 0 до 9
    if(s>=0 && s<=9)
    {
        cout<< from0to9[s];
        return 0;
    }

    //если от 10 до 19
    if(s>=10 && s<=19)
    {
        cout<< from10to19[s-10];
        return 0;
    }
    // если от 20 до 90 десятки
    if(s>=20 &&!(s%10))
    {
        cout<< from20to99[(s/10)-2];
        return 0;
    }
    // если от 21 до 99 не десятки
    cout<< from20to99[(s/10)-2]<<"-"<<from0to9[s%10];
    //((void(*)(void))0)();
    return 0;
    }
