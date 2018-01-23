// g++ -std=c++11
#include <iostream>
#include <math.h>
#include <iomanip>	// decimal places

int factorial(int n)
{
	int fct = 1;	
	for (int i = 1; i <= n; i++)
		fct *= i;
	return fct;
}

void sine(float x)
{
	float sin = 0;
	sin = x - (pow(x, 3) / factorial(3)) + (pow(x, 5) / factorial(5)) - (pow(x, 7) / factorial(7)) + (pow(x, 9) / factorial(9));

	std::cout << std::fixed << std::setprecision(3) << sin << std::endl;
}

void cosine(float x)
{
	float cos = 0;
	cos = 1 - (pow(x, 2) / factorial(2)) + (pow(x, 4) / factorial(4)) - (pow(x, 6) / factorial(6)) + (pow(x, 8) / factorial(8));
	
	std::cout << std::fixed << std::setprecision(3) << cos << std::endl;
}

int main()
{
	int N;
	std::cin >> N;
	
	for (int testcase = 0; testcase < N; testcase++)
	{
		float test = 0;
		std::cin >> test;

		sine(test);
		cosine(test);
	}
	
	system("pause");
	return 0;
}