#include <iostream>
#include <math.h>
using namespace std;

void taskLogic(int a, int b, int n)
{
	for (int i = 0; i < n; i++)
	{
		long result = a;
		for (int j = 0; j <= i; j++)
			result = result + pow(2, j) * b;
		cout << result << " ";
	}
	cout << endl;
}

int main()
{
	int T; cin >> T;
	while (T--)
	{
		int a, b, n; cin >> a >> b >> n;
		taskLogic(a, b, n);
	}

	system("pause");
	return 0;
}