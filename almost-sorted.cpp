#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n; cin >> n;
	vector<long long> v(n);		
	for (int i = 0; i < n; i++) 
	{
		cin >> v[i];
	}

	vector<int> mistakes;
	for (int i = 1; i < n; i++) 
	{
		if (v[i] < v[i - 1])
		{
			if ( (mistakes.size() < 2) || (i - 1 - mistakes.back() == 1) )
			{
				mistakes.push_back(i - 1);
			}
			else
			{
				cout << "no" << endl;
				return 0;
			}
		}
	}

	if (mistakes.empty())
	{
		printf("yes\n");
		return 0;
	}

	int left = mistakes[0], right = mistakes.back() + 1;
	const char* output = ((mistakes.size() <= 2) ? "swap" : "reverse");

	if ( (left == 0 || v[right] >= v[left - 1]) &&
		(right == n - 1 || v[left] <= v[right + 1]) )
	{
		printf("yes\n%s %d %d\n", output, left + 1, right + 1);
	}
	else
	{
		printf("no\n");
	}

	return 0;
}