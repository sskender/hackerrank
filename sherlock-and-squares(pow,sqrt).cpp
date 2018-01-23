// Number of squares between two integers

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int testcase = 0; testcase < T; testcase++)
	{
		int numOfSquares = 0;
		long a = 0, b = 0;
		cin >> a >> b;

		int minRoot = int(sqrt((float)(a)));
		if (a - pow(minRoot, 2) > 0)
			minRoot++;

		while (pow(minRoot, 2) >= a && pow(minRoot, 2) <= b)
		{
			minRoot++;
			numOfSquares++;
		}

		cout << numOfSquares << endl;
	}

	return 0;
}