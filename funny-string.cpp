#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

bool funnyOrNot(string s)
{
	string s1 = s;
	reverse(s.begin(), s.end());
	string s2 = s;

	for (int i = 1; i < s.size(); i++)
		if (abs(s1[i] - s1[i - 1]) != abs(s2[i] - s2[i - 1]))
			return false;

	return true;
}

int main()
{
	int T; cin >> T; string s;
	while (T--)
	{
		cin >> s;
		cout << (funnyOrNot(s) ? ("Funny") : ("Not Funny")) << endl;
	}

	system("pause");
	return 0;
}