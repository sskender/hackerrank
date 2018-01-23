#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
void printQuery(vector<int> const &v) {
	int index; cin >> index;
	cout << v[index] << endl;
}
*/

vector<int> fillArray(int n) {
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	return v;
}

int main()
{
	int n; cin >> n;	// n integers in array a
	int k; cin >> k;	// times to rotate
	int q; cin >> q;	// query of indexes

	vector<int> a = fillArray(n);

	int query, index;

	while (q--)
	{
		cin >> query;
		index = (n - (k%n) + query) % n;
		cout << a[index] << endl;
	}

	system("pause");
	return 0;
}