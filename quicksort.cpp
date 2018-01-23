#include <iostream>
#include <vector>
using namespace std;

void partition1(vector<int> v)
{
	int *pivot = &v[0];

	for (auto const &i : v)
		if (*pivot > i) { cout << i << " "; }
	cout << *pivot << " ";
	for (auto const &i : v)
		if (*pivot < i) { cout << i << " "; }

	cout << endl;
}

void printara(vector<int> v)
{
	for (auto const &i : v)
		cout << i << " ";
	cout << endl;
}

vector<int> quickSort(vector<int> ar, int ar_size)
{
	vector<int> left, right;
	int pivot;

	if (ar_size <= 1) { return ar; }

	pivot = ar[0];
	for (int i = 1; i < ar_size; i++)
	{
		if (ar[i] <= pivot) { left.push_back(ar[i]); }
		else { right.push_back(ar[i]); }
	}

	left = quickSort(left, left.size());
	right = quickSort(right, right.size());
	left.push_back(pivot);
	for (int i = 0; i < right.size(); i++)
		left.push_back(right[i]);

	printara(left);

	return left;
}

int main()
{
	int n; cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];

	partition1(v);
	v = quickSort(v, n);

	system("pause");
	return 0;
}