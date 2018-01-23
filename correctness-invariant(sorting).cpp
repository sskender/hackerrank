#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
	int shifts = 0;

	for (int i = 1; i < size; i++) {
		
		// option 1
		int j = i;
		while (j > 0 && arr[j] < arr[j - 1])
		{
			swap(arr[j], arr[j - 1]);
			j--;
			shifts++;
		}
		/*
		// option 2
		for (int j = 0; j < i; j++)
			if (arr[i] < arr[j]) {
				swap(arr[i], arr[j]);
				shifts++;
			}
		*/
	}

	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl << shifts << endl;
}

int main()
{
	int T; cin >> T;
	int arr[1000] = { 0, };

	for (int i = 0; i < T; i++)
	{
		int test = 0; cin >> test;
		arr[i] = test;
	}

	insertionSort(arr, T);

	system("pause");
	return 0;
}