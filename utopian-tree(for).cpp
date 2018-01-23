#include <iostream>

int main()
{
	int T;								// num of test cases
	std::cin >> T;

	for (int testcase = 0; testcase < T; testcase++)
	{
		int height = 1;					// start height is 1
		int N = 0;
		std::cin >> N;					// num of cycles

		for (int cycle = 0; cycle < N; cycle++)
		{
			if (cycle % 2 == 0)			// spring
			{
				height *= 2;
			}
			else
			{
				height += 1;			// summer
			}
		}

		std::cout << height << std::endl;
	}
	system("pause");
	return 0;
}