#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector< pair<long, long> > MakeOrders(int N)
{
	vector< pair<long, long> > v; long a, b;
	for (int i = 1; i < N + 1; i++)
	{
		cin >> a >> b;
		v.push_back(make_pair(a + b, i));
	}
	return v;
}

void Printara(vector< pair<long, long> > v, int size)
{
	for (int i = 0; i < size; i++)
		cout << v[i].second << " ";
	cout << endl;
}

int main()
{
	int T; cin >> T;
	vector< pair<long, long> > AllOrders = MakeOrders(T);
	sort(AllOrders.begin(), AllOrders.end());
	Printara(AllOrders, T);

	system("pause");
	return 0;
}