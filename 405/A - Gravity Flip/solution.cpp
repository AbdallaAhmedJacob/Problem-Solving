#include <iostream>
#include <vector>
 
using namespace std;
 
void swap(short& n1, short& n2) {
	short t = n1;
	n1 = n2;
	n2 = t;
}
 
int main()
{
	short n;
 
	cin >> n;
	vector<short> arr(n);
	for (short i = 0; i < n; ++i) {
		cin >> arr[i];
	}
 
	for (short i = 0; i < n; ++i) {
		for (short j = i; j < n; ++j) {
			if (arr[i] > arr[j]) swap(arr[i], arr[j]);
		}
	}
 
	for (short i = 0; i < n; ++i) {
		cout << arr[i] << ' ';
	}
 
	return 0;
}