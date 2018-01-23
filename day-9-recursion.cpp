#include <iostream>
#include <algorithm>
using namespace std;

// GCD brainfuck algorithm recursion
long GreatestCommonDivisor(long x, long y)
{
	if (y == 0)
		return x;
	else
		return GreatestCommonDivisor(y, x % y);
}

int main()
{
	long x, y; cin >> x >> y;
	if (x < y) { swap(x, y); }

	cout << GreatestCommonDivisor(x, y) << endl;
	return 0;
}