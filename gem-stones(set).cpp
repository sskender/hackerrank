#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> letters(26);
	int T; cin >> T;
	for (int testcase = 0; testcase < T; testcase++)
	{
		string rock; cin >> rock;
		set<char> composition;
		for (int i = 0; i < rock.size(); i++)
			composition.insert(rock[i]);
		// count letters from set ==> letter max occuarance can be equal to T
		for (set<char>::iterator i = composition.begin(); i != composition.end(); i++)
			letters[*i - 'a'] += 1;
	}
	cout << count(letters.begin(), letters.end(), T);
	return 0;
}			   