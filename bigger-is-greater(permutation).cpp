#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int T; string word; cin >> T;

	while (T--)
	{
		cin >> word;
		cout << (next_permutation(word.begin(), word.end()) ? (word) : ("no answer")) << endl;
	}
	system("pause");
	return 0;
}