#include <iostream>
#include <string>
using namespace std;

string Dec2Bin(long long int n)
{
	string bin;
	while (n != 0)
	{
		bin = (n % 2 == 0 ? '0' : '1') + bin;
		n /= 2;
	}
	return bin;
}

int main()
{
	int T; cin >> T;
	while (T--)
	{
		long long int n; cin >> n;
		cout << Dec2Bin(n) << endl;
	}
	return 0;
}