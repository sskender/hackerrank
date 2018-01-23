#include <algorithm>
#include <math.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long N; cin >> N;
	vector<long long> A(N);
	for (int i = 0; i < N; i++)
		cin >> A[i];

	sort(A.begin(), A.end());

	long long minDiff = A[N - 1];
	for (int i = 0; i < N - 1; i++)
		if (abs(A[i] - A[i + 1]) < minDiff)
			minDiff = abs(A[i] - A[i + 1]);

	for (int i = 0; i < N - 1; i++)
		if (abs(A[i] - A[i + 1]) == minDiff)
			cout << A[i] << " " << A[i + 1] << " ";
	cout << endl;

	return 0;
}