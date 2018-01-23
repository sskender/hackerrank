#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str; cin >> str;
	int arr[26] = { 0 };
	for (int i = 0; i < str.size(); i++)
		arr[str[i] - 'a']++;

	short countOdds = 0;
	for (int i = 0; i < 26; i++)
		if (arr[i] % 2 != 0)
		{
			countOdds++;
			if (countOdds > 1)
				break;
		}

	if (countOdds <= 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	system("pause");
	return 0;
}