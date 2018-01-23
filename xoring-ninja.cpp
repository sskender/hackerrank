#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int mainNOT()
{
	int T; cin >> T;
	while (T--)
	{
		int n; cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];

		cout << static_cast<int>(pow(2, n - 1)*n) % static_cast<int>(pow(10, 9) + 7) << endl;
	}
	system("pause");
	return 0;
}