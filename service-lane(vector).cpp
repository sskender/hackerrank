#include <iostream>
#include <vector>
using namespace std;

int GetVehicle(vector<int> serviceLane, int entrance, int exit)
{
	short smallestVehicle = serviceLane[entrance];
	for (int i = entrance; i <= exit; i++)
		if (serviceLane[i] < smallestVehicle)
			smallestVehicle = serviceLane[i];

	return smallestVehicle;
}

int main()
{
	// define lane and tests
	int N, T; cin >> N >> T;

	// create service lane
	vector<int> serviceLane(N);
	for (int i = 0; i < N; i++)
		cin >> serviceLane[i];

	// fill test cases
	while (T--)
	{
		int entrance, exit; cin >> entrance >> exit;
		cout << GetVehicle(serviceLane, entrance, exit) << endl;
	}

	system("pause");
	return 0;
}