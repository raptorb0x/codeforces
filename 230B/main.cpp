#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;



bool prime(long  n){
    if (n%2==0 && n!=2) return false;
	for(long i=3;i<=sqrt(n);i+=2)
		if(n%i==0)
			return false;
	return true;
}

int main()
{
    //1000267136
    std::ios::sync_with_stdio(false);
    int n;
    long long  x;
   // long long backup;
    double check=0;
    //bool flag =0;
    cin >> n;
    //if(n==99998) flag=true;
    for(int i =0 ;i<n; i++)
    {
        cin >> x;
        //backup=x;
        check = sqrt(x);
        //cout <<sqrt(x)<< " "  << check;
        if (!(check==long (check))||x==1)
        {
            cout<< "NO"<<endl;
            continue;
        }
        x=long(sqrt(x));

        if (prime(x))
        {
           // if (flag)
            //    cout<<backup;
            cout <<"YES"<<endl;
        }
        else
            cout <<"NO"<<endl;
    }

    return 0;
}
