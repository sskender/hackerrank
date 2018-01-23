#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

void funnyString()
{
	string word; cin >> word;
	string reversed = word;

	reverse(reversed.begin(), reversed.end());
	bool funny = true;

	for (int i = 1; i < word.size(); i++)
	{
		if (abs(static_cast<int>(word[i]) - static_cast<int>(word[i - 1])) != abs(static_cast<int>(reversed[i]) - static_cast<int>(reversed[i - 1])))
		{
			funny = false;
			break;
		}
	}

	cout << (funny ? "Funny" : "Not Funny") << endl;
}

int main()
{
	int T; cin >> T;
	while (T--)
		funnyString();
	return 0;
}