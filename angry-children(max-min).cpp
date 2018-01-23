#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long N; cin >> N;
	long K; cin >> K;

	vector<long> v(N);
	for (long i = 0; i < N; i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	long min = v[K - 1] - v[0];
	for (int i = 0; i <= N - K; i++)
	{
		long el = v[i + K - 1] - v[i];
		if (el < min)
			min = el;
	}

	cout << min << endl;

	system("pause");
	return 0;
}