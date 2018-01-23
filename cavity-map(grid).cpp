#include <iostream>
#include <vector>
#include <string>
using namespace std;

void PrintGrid(vector< vector<char> > grid, int size)
{
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++)
		{
			if (row > 0 && row < size - 1 && col>0 && col < size - 1)
			{
				if ((static_cast<int>(grid[row][col]) > static_cast<int>(grid[row][col + 1])) &&
					(static_cast<int>(grid[row][col])>static_cast<int>(grid[row][col - 1])) &&
					(static_cast<int>(grid[row][col]) > static_cast<int>(grid[row + 1][col])) &&
					(static_cast<int>(grid[row][col]) > static_cast<int>(grid[row - 1][col])))
				{
					cout << 'X';
				}
				else
				{
					cout << grid[row][col];
				}
			}
			else
			{
				cout << grid[row][col];
			}
		}
		cout << endl;
	}
}

vector< vector<char> > CreateGrid(int size)
{
	vector< vector<char> > v;
	for (int i = 0; i < size; i++)
	{
		// fill vector with vectors made from string
		string line; cin >> line;
		vector<char> columns(line.begin(), line.end());
		v.push_back(columns);
	}
	return v;
}

int main()
{
	int size; cin >> size;
	vector< vector<char> > grid = CreateGrid(size);
	PrintGrid(grid, size);

	system("pause");
	return 0;
}									