#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int getChanges(string s1, string s2)
{
	int changes = 0;
	int letters[26] = { 0 };

	if (s1.size() != s2.size())
		return -1;
	else
	{
		for (int i = 0; i < s1.size(); i++)
		{
			letters[s1[i] - 'a']++;
			letters[s2[i] - 'a']--;
		}
		for (int i = 0; i < 26; i++)
			changes += abs(letters[i]);
		return changes / 2;
	}
}

int main()
{
	int T; cin >> T;
	while (T--)
	{
		string s; cin >> s;
		cout << getChanges(s.substr(0, s.size() / 2), s.substr(s.size() / 2)) << endl;
	}
	return 0;
}  