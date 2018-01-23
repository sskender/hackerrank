#include <iostream>
#include <math.h>

bool isPrime(long long n)
{
	if (n <= 1) { return false; }
	if (n <= 3) { return true; }
	if ((n % 2 == 0) || (n % 3 == 0)) { return false; }

	long long i = 5, w = 2;
	while (i*i <= n)
	{
		if (n % i == 0) { return false; }
		i += w; w = 6 - w;
	}
	return true;
}

int main()
{
	int T; std::cin >> T;
	while (T--) {
		long long n; std::cin >> n;
		std::cout << (isPrime(n) ? "Prime" : "Not prime") << std::endl;
	}
	return 0;
}