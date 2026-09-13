#include <iostream>
 
using namespace std;
int main()
{
	short n, s = 0, p, v, t;
 
	cin >> n;
	while (n--)
	{
		cin >> p >> v >> t;
		if ((p+v+t)>=2) s++;
	}
	cout << s;
	return 0;
}