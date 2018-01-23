// Maximum of toys to buy
// g++ -std=c++11
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
	long long n, k; std::cin >> n >> k;
	std::vector<int> prices;

	for (int i = 0; i < n; i++)
	{
		int p; std::cin >> p;
		prices.push_back(p);
	}

	std::sort(prices.begin(), prices.end());

	long total_price = 0;
	int max_toys = 0;

	for (std::vector<int>::iterator i = prices.begin(); i != prices.end(); i++)
	{
		total_price += *i;

		if (total_price <= k)
			max_toys += 1;
		else
			break;
	}

	std::cout << max_toys;

	return 0;
}