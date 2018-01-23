#include <iostream>
using namespace std;

int chocolates2eat(int money, int price, int wrappers)
{
	// bought from money and got N wrappers
	int total = money / price;
	int haveWrappers = total;

	// exchanging wrappers for chocolate
	while (haveWrappers >= wrappers)
	{
		int exchanged = haveWrappers / wrappers;
		total += exchanged;
		haveWrappers = haveWrappers + exchanged - exchanged * wrappers;
	}

	return total;
}

int main()
{
	int T, n, c, m;
	cin >> T;
	while (T--)
	{
		cin >> n >> c >> m;
		cout << chocolates2eat(n, c, m) << endl;
	}
	
	system("pause");
	return 0;
}