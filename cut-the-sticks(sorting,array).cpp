#include <iostream>
using namespace std;

int main()
{
	// create sticks
	int n; cin >> n;
	int sticks_array[1000] = { 0, };

	for (int i = 0; i < n; i++) {
		cin >> sticks_array[i];
	}

	while (true) 
	{
		int smallest = 1000;
		int remain = 0;

		// count process
		for (int i = 0; i < n; i++) {
			if (sticks_array[i] != 0) {
				remain++;
			}
		}

		if (remain == 0)
			break;

		cout << remain << endl;

		// smallest
		for (int i = 0; i < n; i++) {
			if (sticks_array[i] < smallest && sticks_array[i] != 0) {
				smallest = sticks_array[i];
			}
		}

		// cut process
		for (int i = 0; i < n; i++) {
			if (sticks_array[i] != 0) {
				sticks_array[i] -= smallest;
			}
		}

	}

	return 0;
}