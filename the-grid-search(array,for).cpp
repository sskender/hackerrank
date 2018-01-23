#include <iostream>
using namespace std;

char grid[1001][1001], pattern[1001][1001];


int main()
{	
	
	int T; cin >> T;

	while (T--)
	{
		

		int R, C, r, c;

		// create grid		
		cin >> R >> C;
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < C; j++)
			{
				cin >> grid[i][j];
			}
		}

		// create pattern
		cin >> r >> c;
		for (int i = 0; i < r; i++)
		{	
			for (int j = 0; j < c; j++)
			{
				cin >> pattern[i][j];
			}
		}


		// find
		bool exists = false;

		int maxRows = R - r + 1;
		int maxColumns = C - c + 1;

		for (int iGrid = 0; iGrid < maxRows; iGrid++)
		{
			for (int jGrid = 0; jGrid < maxColumns; jGrid++)
			{
				
				char currentGridSign = grid[iGrid][jGrid];
				char firstPatternSign = pattern[0][0];

				if (currentGridSign == firstPatternSign)	// first found, check next
				{

					bool isPossible = true;

					for (int iPattern = 0; iPattern < r; iPattern++)
					{
						for (int jPattern = 0; jPattern < c; jPattern++)
						{
							if (grid[iGrid + iPattern][jGrid + jPattern] != pattern[iPattern][jPattern])
							{
								isPossible = false;
								break;						// break column
							}
						}
						
						if (isPossible == false)
							break;							// break row
					}
					
					if (isPossible == true)
					{
						exists = true;
						break;
					}

				}

			}
		}


		if (exists)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}


	}


	system("pause");
	return 0;
}