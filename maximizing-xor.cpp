#include <iostream>

int maxXOR(int l, int r) 
{
	int max = 0;
	for (int i = l; i <= r; i++)
		for (int j = i; j <= r; j++)
			if ((i ^ j) > max) { max = i ^ j; }
	return max;
}

int main()
{
	int l, r; std::cin >> l >> r;
	std::cout << maxXOR(l, r) << std::endl;
	//system("pause");
	return 0;
}