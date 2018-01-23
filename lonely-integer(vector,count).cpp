#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	// create array
	short N; cin >> N;
	vector<int> v;
	for (short i = 0; i < N; i++)
	{
		int input; cin >> input;
		v.push_back(input);
	}

	// count
	while (true)
	{
		for (auto &el : v)
		{
			if (count(v.begin(), v.end(), el) % 2 != 0)
			{
				cout << el;
				break;
			}
		}
		break;
	}

	system("pause");
	return 0;
}