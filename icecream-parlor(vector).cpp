#include <iostream>
#include <vector>
using namespace std;

void PrintFlavors()
{
	int dollars; cin >> dollars;
	int flavors; cin >> flavors;

	// fill offers
	vector<int> v;
	for (int offer = 0; offer < flavors; offer++)
	{
		int input; cin >> input;
		v.push_back(input);
	}

	// find flavors
	for (int i = 0; i < flavors; i++)
	{
		for (int j = 0; j < flavors; j++)
		{
			if ((i != j) && (v[i] + v[j] == dollars))
			{
				if (i < j)
				{
					cout << i + 1 << " " << j + 1 << endl;
					return;
				}
				else
				{
					cout << j + 1 << " " << i + 1 << endl;
					return;
				}
			}
		}
	}
}

int main()
{
	int T; cin >> T;
	while (T--)
	{
		PrintFlavors();
	}

	system("pause");
	return 0;
}