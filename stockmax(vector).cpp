#include <iostream>
#include <vector>
using namespace std;

int main()
{
	short T; cin >> T;
	while (T--)
	{
		vector<int> stockArray;
		int N; cin >> N;

		for (int stock = 0; stock < N; stock++)
		{
			int input; cin >> input;
			stockArray.push_back(input);
		}
		
		// stock algorithm
		long sell = 0; long highest = 0;
		for (int i = N - 1; i >= 0; i--)
		{
			if (stockArray[i] >= highest)
				highest = stockArray[i];
			sell += highest - stockArray[i];
		}
		cout << sell << endl;
	}

	system("pause");
	return 0;
}