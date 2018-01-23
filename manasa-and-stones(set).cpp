#include <iostream>
#include <set>
using namespace std;

set<int> StoneAlgorithm(int n, int a, int b)
{
	set <int> setOfStones;
	for (int i = 0; i < n; i++)
		setOfStones.insert(a*i + b*(n - 1 - i));

	return setOfStones;
}

void printSet(set <int> myset)
{
	for (set<int>::iterator i = myset.begin(); i != myset.end(); i++)
		cout << *i << " ";
	cout << endl;
}

int main()
{
	int T; cin >> T;
	while (T--)
	{
		int n, a, b; cin >> n >> a >> b;
		set <int> calculateStones = StoneAlgorithm(n, a, b);
		printSet(calculateStones);
	}

	system("pause");
	return 0;
}