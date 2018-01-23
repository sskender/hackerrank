/*
Kaprekar number for a given base is a non - negative integer, 
the representation of whose square in that base can be split
into two parts that add up to the original number again.

For instance, 45 is a Kaprekar number, because 45^2 = 2025 and 20 + 25 = 45
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool Kaprekar(long long n)
{
	long long square = n * n;
	long long numOfDigits = 0, left = 0, right = 0;
	vector<int> squareArray;

	// push digits in array and count
	while (square != 0)
	{
		squareArray.push_back(square % 10);
		square /= 10;
		numOfDigits++;
	}

	/*
	reverse(squareArray.begin(), squareArray.end());

	// left
	for (int i = 0; i < numOfDigits / 2; i++)
		left = left * 10 + squareArray[i];

	// right
	for (int i = numOfDigits / 2; i < numOfDigits; i++)
		right = right * 10 + squareArray[i];
	*/

	// left
	long long t = 1;
	for (int i = numOfDigits / 2 + numOfDigits % 2; i < numOfDigits; i++)
	{
		left += t*squareArray[i];
		t *= 10;
	}

	// right
	t = 1;
	for (int i = 0; i < (numOfDigits / 2 + numOfDigits % 2); i++)
	{
		right += t*squareArray[i];
		t *= 10;
	}

	// check if Kaprekar
	if (left + right == n)
		return true;
	else
		return false;
}	 

int main()
{
	long long p, q; cin >> p >> q;
	bool any = false;

	for (int i = p; i <= q; i++)
	{
		if (Kaprekar(i))
			cout << i << " "; any = true;
	}

	if (!any)
		cout << "INVALID RANGE" << endl;

	system("pause");
	return 0;
}