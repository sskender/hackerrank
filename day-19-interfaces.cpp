#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class AdvancedArithmetic
{
public:
	virtual int divisorSum(int n) = 0;
};

//Write your code here
class Calculator :
	public AdvancedArithmetic
{
	int divisorSum(int n)
	{
		if (n == 1) { return 1; }
		int suma = n + 1;  // at least two divisors
		for (int i = 2; i < (n / 2) + 1; i++)
			if (n % i == 0)
				suma += i;
		return suma;
	}
};
// End here

int main() {
	int n; cin >> n;
	AdvancedArithmetic *myCalculator = new Calculator();
	int sum = myCalculator->divisorSum(n);
	cout << "I implemented: AdvancedArithmetic\n" << sum << endl;
	
	system("pause");
	return 0;
}