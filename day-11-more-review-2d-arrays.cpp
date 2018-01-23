#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int array2d[6][6];
vector<int> hourglassesSUM;

void fillArray()
{
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			cin >> array2d[i][j];
}

void findHourglasses()
{
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			// reset hourglass sum
			int sum = 0;
			// top
			sum += array2d[i - 1][j - 1];
			sum += array2d[i - 1][j];
			sum += array2d[i - 1][j + 1];
			// middle
			sum += array2d[i][j];
			// bottom
			sum += array2d[i + 1][j - 1];
			sum += array2d[i + 1][j];
			sum += array2d[i + 1][j + 1];
			// save sum
			hourglassesSUM.push_back(sum);
		}
	}
}

int main()
{
	fillArray();
	findHourglasses();

	cout << *max_element(hourglassesSUM.begin(), hourglassesSUM.end()) << endl;

	return 0;
}