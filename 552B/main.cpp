#include <iostream>

typedef long long ll;
using namespace std;
ll i,n,x,m,k,ans;
int main()
{
    cin >> n;
	x = n;
	while (x)
	{
		x /= 10;
		m++;
	}
	ans = n*m + m - 1;
	k = 1;
	for (i = 0; i < m-1; i++)
	{
		k *= 10;
		ans -=k;
	}
	cout << ans << endl;
	return 0;
}
