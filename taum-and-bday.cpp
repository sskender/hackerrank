#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t; cin >> t;
	for (int testcase = 0; testcase < t; testcase++)
	{
		int b, w; cin >> b >> w;
		unsigned long x, y, z; cin >> x >> y >> z;
		cout << b * min(x, y + z) + w * min(x + z, y) << endl;
	}

	return 0;
}