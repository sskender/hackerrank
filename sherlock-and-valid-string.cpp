#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int> v)
{	
	// find starting item, actual letters (not 0s)
	int pattern, index;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] != 0)
		{
			pattern = v[i]; index = i;
			break;
		}
	}
	int actual = v.size() - index;
	
	// count each char appearance and times char changes
	int counter = 0, times = 0;
	for (int i = index; i < v.size(); i++)
	{
		counter++;
		if (v[i] != pattern)
		{
			pattern = v[i];		// new pattern
			times++;			// add changes
			counter = 1;		// reset char appearance
		}
		if (times > 1)
			return false;		// can not change more than once
	}

	// array is sorted, counter can be (size - 1) or (1)
	if (counter > 1 && counter < actual - 1)
		return false;
	
	// everything is valid
	return true;
}

int main()
{
	vector<int> v(26);
	string s; cin >> s;

	for (int i = 0; i < s.size(); i++)
		v[s[i] - 'a']++;

	sort(v.begin(), v.end());

	if (isValid(v))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}