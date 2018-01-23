#include <iostream>
#include <string>
using namespace std;

void caesar_cipher_1(int length, string phrase, int shift)
{
	string encrypted;
	shift %= 26;

	for (int i = 0; i < length; i++)
	{
		
		if (phrase[i] >= 'A' && phrase[i] <= 'Z')
		{
			if (phrase[i] + shift > 'Z')
				encrypted += static_cast<char>(phrase[i] + shift - 26);
			else
				encrypted += static_cast<char>(phrase[i] + shift);
		}
		
		else if (phrase[i] >= 'a' && phrase[i] <= 'z')
		{
			if (phrase[i] + shift > 'z')
				encrypted += static_cast<char>(phrase[i] + shift - 26);
			else
				encrypted += static_cast<char>(phrase[i] + shift);
		}

		else
		{
			encrypted += phrase[i];
		}
					  
	}

	cout << encrypted;
}

int main()
{
	int n, k; string s;
	cin >> n >> s >> k;

	caesar_cipher_1(n, s, k);

	system("pause");
	return 0;
}