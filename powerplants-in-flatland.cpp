#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
	string S; cin >> S;
	int ch = 0;

	for (int i = 0; i < S.size(); i++)
	{
		if (S[i] == 'S' && !(i % 3 == 0 || i % 3 == 2))
			ch++;
		else if (S[i] == 'O' && !(i % 3 == 1))
			ch++;
		else if (S[i] != 'S'&&S[i] != 'O')
			ch++;
	}
	cout << ch << endl;
	system("pause");
	return 0;
}