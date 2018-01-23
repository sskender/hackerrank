// Find the digits in this number that exactly divide N

#include <iostream>
#include <string>
using namespace std;

void digit_counter(string n)
{
	int number = stoi(n);	// convert string to number
	int digits_count = 0;	// actual result

	for (string::iterator i = n.begin(); i != n.end(); ++i)
	{
		if (*i != '0')		// division by zero not defined, ignore
		{
			int digit = *i - '0';
			if (number % digit == 0)
			{
				digits_count += 1;
			}
		}
	}

	cout << digits_count << endl;
}

int main()
{
	int T;
	cin >> T;	// test cases

	for (int testcase = 0; testcase < T; testcase++)
	{
		string n = "";
		cin >> n;

		digit_counter(n);
	}

	return 0;
}