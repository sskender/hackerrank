#include <iostream>
#include <string>
#include <map>
using namespace std;
map<string, string> phoneBook;

void CreateContact()
{
	string name, num;
	getline(cin, name); getline(cin, num);
	phoneBook.insert(make_pair(name, num));
}

void FindContact(string input)
{
	if (phoneBook.find(input) == phoneBook.end())
		cout << "Not found" << endl;
	else
		cout << input << '=' << phoneBook[input] << endl;
}

int main()
{
	int T; cin >> T;
	cin.get(); cin.clear();

	while (T--)
		CreateContact();

	while (true)
	{
		string input; getline(cin, input);
		if (input.size() == 0)
			break;
		else
			FindContact(input);
	}

	return 0;
}