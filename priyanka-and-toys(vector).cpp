#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> fillVector(int len)
{
	vector<int> v;
	while (len--)
	{
		int n; cin >> n;
		v.push_back(n);
	}
	return v;
}

int main()
{
	int n; cin >> n;
	vector<int> weight = fillVector(n);
	sort(weight.begin(), weight.begin() + n);

	int mustBuy = 1, first = weight[0];		// must buy first
	for (vector<int>::iterator i = weight.begin() + 1; i != weight.end(); i++)
	{
		if (*i - first > 4)					// if not in "4" range, buy new, else free
		{
			first = *i;
			mustBuy++;
		}
	}
	
	cout << mustBuy << endl;
	return 0;
}