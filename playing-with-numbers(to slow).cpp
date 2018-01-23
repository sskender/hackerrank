// šukurac presporo je
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	long N;
	scanf_s("%ld", &N);
	vector<long> N_array;

	for (int i = 0; i < N; i++)
	{
		long input;
		scanf_s("%ld", &input);
		N_array.push_back(input);
	}

	long Q;
	scanf_s("%ld", &Q);

	for (int i = 0; i < Q; i++)
	{
		long input;
		scanf_s("%ld", &input);
		long long suma = 0;
		for (long &elementN : N_array)
		{
			elementN += input;
			suma += abs(elementN);
		}
		printf("%ld", suma);
	}

	system("pause");
	return 0;
}