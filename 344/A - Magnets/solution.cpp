#include <iostream>
using namespace std;
 
int main()
{
// 344A
int n, groups = 1;
string s1, s2;
 
cin >> n;
cin >> s1; // This is on of n.
for (int i = 1; i < n; ++i) {
	cin >> s2;
	if (s1 != s2) {
		s1 = s2;
		++groups;
	}
}
cout << groups;
return 0;
}