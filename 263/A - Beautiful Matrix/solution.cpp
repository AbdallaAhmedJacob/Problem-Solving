#include <iostream>
 
using namespace std;
 
short GetMoves(short n)
{
	return (n < 3) ? 3 - n : n - 3;
}
 
int main()
{
	// 263
	short arr[5][5], indexRow = 0, indexColumn = 0;
 
	for (short i = 1; i <= 5; ++i) {
		for (short j = 1; j <= 5; ++j) {
			cin >> arr[i - 1][j - 1];
			if (arr[i - 1][j - 1] == 1) {
				indexRow = j;
				indexColumn = i;
			}
		}	
	}
	cout << GetMoves(indexRow) + GetMoves(indexColumn);
	
	return 0;
}