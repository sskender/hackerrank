#include <iostream>
using namespace std;

void DecentNumber(long int N)
{
	bool found = false;

	for (int i = N / 3; i >= 0; i--)
	{
		if ((N - (3 * i)) % 5 == 0)
		{
			for (int j = 0; j < 3 * i; j++)
				cout << 5;

			for (int j = 0; j < 5 * ((N - (3 * i)) / 5); j++)
				cout << 3;

			found = true; break;
		}
	}

	if (!found)
		cout << -1;

	cout << endl;
}

int main()
{
	int T; cin >> T;
	while (T--)
	{
		int N; cin >> N;
		DecentNumber(N);
	}

	system("pause");
	return 0;
}