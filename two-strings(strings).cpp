#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T; cin >> T;
	while(T--)
	{
		string a, b;
		cin >> a >> b;
		if (a.size() < b.size())
			a.swap(b);								// always use longer
		bool hasCommon = false;
		for (int i = 0; i < a.size(); i++)
		{
			if (b.find(a[i]) != std::string::npos)	// char exists => break
			{
				hasCommon = true;
				break;
			}
		}
		if (hasCommon)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	system("pause");
	return 0;
}